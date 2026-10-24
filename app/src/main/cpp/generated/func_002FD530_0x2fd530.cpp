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

// Function: func_002FD530
// Address: 0x2fd530 - 0x2fd610
void func_002FD530_0x2fd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FD530_0x2fd530");
#endif

    switch (ctx->pc) {
        case 0x2fd550u: goto label_2fd550;
        case 0x2fd5d4u: goto label_2fd5d4;
        case 0x2fd5e4u: goto label_2fd5e4;
        case 0x2fd5ecu: goto label_2fd5ec;
        case 0x2fd5f8u: goto label_2fd5f8;
        default: break;
    }

    ctx->pc = 0x2fd530u;

    // 0x2fd530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fd530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fd534: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fd534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2fd538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd53c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2fd53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2fd540: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fd544: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd548: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x2FD548u;
    SET_GPR_U32(ctx, 31, 0x2FD550u);
    ctx->pc = 0x2FD54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD548u;
    // 0x2fd54c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x2FD548u, 0x2FD550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD550u;
label_2fd550:
    // 0x2fd550: 0xc6030178  lwc1        $f3, 0x178($s0)
    ctx->pc = 0x2fd550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd554: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fd554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd558: 0xc602017c  lwc1        $f2, 0x17C($s0)
    ctx->pc = 0x2fd558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd55c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fd55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd560: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x2fd560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd564: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd568: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fd568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd56c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2fd56cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fd570: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2fd570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fd574: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2fd574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fd578: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2fd578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2fd57c: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fd580: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fd580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd584: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fd584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fd588: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD588u;
    {
        const bool branch_taken_0x2fd588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD588u;
        // 0x2fd58c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd588) {
            ctx->pc = 0x2FD5A4u;
            goto label_2fd5a4;
        }
    }
    ctx->pc = 0x2FD590u;
    // 0x2fd590: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2fd590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
    // 0x2fd594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fd594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fd598: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD598u;
    {
        const bool branch_taken_0x2fd598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD598u;
        // 0x2fd59c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd598) {
            ctx->pc = 0x2FD5B8u;
            goto label_2fd5b8;
        }
    }
    ctx->pc = 0x2FD5A0u;
    // 0x2fd5a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2fd5a4:
    // 0x2fd5a4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fd5a8: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fd5ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fd5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fd5b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD5B0u;
    {
        const bool branch_taken_0x2fd5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5B0u;
        // 0x2fd5b4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5b0) {
            ctx->pc = 0x2FD5D4u;
            goto label_2fd5d4;
        }
    }
    ctx->pc = 0x2FD5B8u;
label_2fd5b8:
    // 0x2fd5b8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2fd5bc: 0xc4401dc0  lwc1        $f0, 0x1DC0($v0)
    ctx->pc = 0x2fd5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd5c4: 0xc46c7a14  lwc1        $f12, 0x7A14($v1)
    ctx->pc = 0x2fd5c4u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd5c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fd5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd5cc: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2FD5CCu;
    SET_GPR_U32(ctx, 31, 0x2FD5D4u);
    ctx->pc = 0x2FD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5CCu;
    // 0x2fd5d0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2FD5CCu, 0x2FD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5D4u;
label_2fd5d4:
    // 0x2fd5d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2fd5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd5d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd5dc: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x2FD5DCu;
    SET_GPR_U32(ctx, 31, 0x2FD5E4u);
    ctx->pc = 0x2FD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5DCu;
    // 0x2fd5e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x2FD5DCu, 0x2FD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5E4u;
label_2fd5e4:
    // 0x2fd5e4: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x2FD5E4u;
    SET_GPR_U32(ctx, 31, 0x2FD5ECu);
    ctx->pc = 0x2FD5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5E4u;
    // 0x2fd5e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x2FD5E4u, 0x2FD5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5ECu;
label_2fd5ec:
    // 0x2fd5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd5f0: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x2FD5F0u;
    SET_GPR_U32(ctx, 31, 0x2FD5F8u);
    ctx->pc = 0x2FD5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5F0u;
    // 0x2fd5f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x2FD5F0u, 0x2FD5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5F8u;
label_2fd5f8:
    // 0x2fd5f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fd5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fd5fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2fd5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd604: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD604u;
        // 0x2fd608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD60Cu;
    // 0x2fd60c: 0x0  nop
    ctx->pc = 0x2fd60cu;
    // NOP
    ctx->pc = 0x2fd610u;
}
