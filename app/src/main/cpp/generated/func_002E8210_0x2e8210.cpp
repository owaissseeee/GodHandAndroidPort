#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002E8210
// Address: 0x2e8210 - 0x2e82f8
void func_002E8210_0x2e8210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E8210_0x2e8210");
#endif

    switch (ctx->pc) {
        case 0x2e8290u: goto label_2e8290;
        case 0x2e82a8u: goto label_2e82a8;
        case 0x2e82ccu: goto label_2e82cc;
        case 0x2e82e4u: goto label_2e82e4;
        default: break;
    }

    ctx->pc = 0x2e8210u;

    // 0x2e8210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e821c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e821cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8220: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2e8220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2e8224: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x2e8224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
    // 0x2e8228: 0xae0202b0  sw          $v0, 0x2B0($s0)
    ctx->pc = 0x2e8228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
    // 0x2e822c: 0x8c640170  lw          $a0, 0x170($v1)
    ctx->pc = 0x2e822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x2e8230: 0xae0402bc  sw          $a0, 0x2BC($s0)
    ctx->pc = 0x2e8230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 4));
    // 0x2e8234: 0xc460013c  lwc1        $f0, 0x13C($v1)
    ctx->pc = 0x2e8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8238: 0xe60002b4  swc1        $f0, 0x2B4($s0)
    ctx->pc = 0x2e8238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
    // 0x2e823c: 0xc4610140  lwc1        $f1, 0x140($v1)
    ctx->pc = 0x2e823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8240: 0x1c800003  bgtz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8240u;
    {
        const bool branch_taken_0x2e8240 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x2E8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8240u;
        // 0x2e8244: 0xe60102b8  swc1        $f1, 0x2B8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8240) {
            ctx->pc = 0x2E8250u;
            goto label_2e8250;
        }
    }
    ctx->pc = 0x2E8248u;
    // 0x2e8248: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2e8248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e824c: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x2e824cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
label_2e8250:
    // 0x2e8250: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2e8250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2e8254: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x2e8254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2e8258: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8258u;
    {
        const bool branch_taken_0x2e8258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8258) {
            ctx->pc = 0x2E825Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8258u;
            // 0x2e825c: 0xc60c02b4  lwc1        $f12, 0x2B4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E826Cu;
            goto label_2e826c;
        }
    }
    ctx->pc = 0x2E8260u;
    // 0x2e8260: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2e8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e8264: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x2e8264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
    // 0x2e8268: 0xc60c02b4  lwc1        $f12, 0x2B4($s0)
    ctx->pc = 0x2e8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e826c:
    // 0x2e826c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e826cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8270: 0x0  nop
    ctx->pc = 0x2e8270u;
    // NOP
    // 0x2e8274: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2e8274u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8278: 0x0  nop
    ctx->pc = 0x2e8278u;
    // NOP
    // 0x2e827c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E827Cu;
    {
        const bool branch_taken_0x2e827c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e827c) {
            ctx->pc = 0x2E8298u;
            goto label_2e8298;
        }
    }
    ctx->pc = 0x2E8284u;
    // 0x2e8284: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2e8284u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2e8288: 0xc0ba00e  jal         func_2E8038
    ctx->pc = 0x2E8288u;
    SET_GPR_U32(ctx, 31, 0x2E8290u);
    ctx->pc = 0x2E828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8288u;
    // 0x2e828c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8038u, 0x2E8288u, 0x2E8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8290u;
label_2e8290:
    // 0x2e8290: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8290u;
    {
        const bool branch_taken_0x2e8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8290u;
        // 0x2e8294: 0xc60c02b8  lwc1        $f12, 0x2B8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8290) {
            ctx->pc = 0x2E82ACu;
            goto label_2e82ac;
        }
    }
    ctx->pc = 0x2E8298u;
label_2e8298:
    // 0x2e8298: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2e8298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2e829c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e829cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e82a0: 0xc0ba00e  jal         func_2E8038
    ctx->pc = 0x2E82A0u;
    SET_GPR_U32(ctx, 31, 0x2E82A8u);
    ctx->pc = 0x2E82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82A0u;
    // 0x2e82a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8038u, 0x2E82A0u, 0x2E82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82A8u;
label_2e82a8:
    // 0x2e82a8: 0xc60c02b8  lwc1        $f12, 0x2B8($s0)
    ctx->pc = 0x2e82a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e82ac:
    // 0x2e82ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e82acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82b0: 0x0  nop
    ctx->pc = 0x2e82b0u;
    // NOP
    // 0x2e82b4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2e82b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e82b8: 0x0  nop
    ctx->pc = 0x2e82b8u;
    // NOP
    // 0x2e82bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E82BCu;
    {
        const bool branch_taken_0x2e82bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e82bc) {
            ctx->pc = 0x2E82D4u;
            goto label_2e82d4;
        }
    }
    ctx->pc = 0x2E82C4u;
    // 0x2e82c4: 0xc0ba05a  jal         func_2E8168
    ctx->pc = 0x2E82C4u;
    SET_GPR_U32(ctx, 31, 0x2E82CCu);
    ctx->pc = 0x2E82C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82C4u;
    // 0x2e82c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8168u, 0x2E82C4u, 0x2E82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82CCu;
label_2e82cc:
    // 0x2e82cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E82CCu;
    {
        const bool branch_taken_0x2e82cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82CCu;
        // 0x2e82d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82cc) {
            ctx->pc = 0x2E82E8u;
            goto label_2e82e8;
        }
    }
    ctx->pc = 0x2E82D4u;
label_2e82d4:
    // 0x2e82d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e82d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e82d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e82d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e82dc: 0xc0ba05a  jal         func_2E8168
    ctx->pc = 0x2E82DCu;
    SET_GPR_U32(ctx, 31, 0x2E82E4u);
    ctx->pc = 0x2E82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82DCu;
    // 0x2e82e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8168u, 0x2E82DCu, 0x2E82E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82E4u;
label_2e82e4:
    // 0x2e82e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e82e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e82e8:
    // 0x2e82e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e82ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e82ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e82f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E82F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82F0u;
        // 0x2e82f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E82F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E82F8u;
}
