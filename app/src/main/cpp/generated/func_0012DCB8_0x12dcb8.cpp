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

// Function: func_0012DCB8
// Address: 0x12dcb8 - 0x12def0
void func_0012DCB8_0x12dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012DCB8_0x12dcb8");
#endif

    switch (ctx->pc) {
        case 0x12dd04u: goto label_12dd04;
        case 0x12dd14u: goto label_12dd14;
        case 0x12dd24u: goto label_12dd24;
        case 0x12dd38u: goto label_12dd38;
        case 0x12dd48u: goto label_12dd48;
        case 0x12dd68u: goto label_12dd68;
        case 0x12ddb0u: goto label_12ddb0;
        case 0x12de00u: goto label_12de00;
        default: break;
    }

    ctx->pc = 0x12dcb8u;

    // 0x12dcb8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12dcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12dcbc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12dcc0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x12dcc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12dcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcc8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x12dccc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x12dcd0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12dcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x12dcd4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12dcd8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x12dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x12dcdc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12dce0: 0x9e020008  lwu         $v0, 0x8($s0)
    ctx->pc = 0x12dce0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dce4: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x12dce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x12dce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12dcec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12DCECu;
    {
        const bool branch_taken_0x12dcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCECu;
        // 0x12dcf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcec) {
            ctx->pc = 0x12DD1Cu;
            goto label_12dd1c;
        }
    }
    ctx->pc = 0x12DCF4u;
    // 0x12dcf4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x12dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x12dcf8: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x12dcfc: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x12DCFCu;
    SET_GPR_U32(ctx, 31, 0x12DD04u);
    ctx->pc = 0x12DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCFCu;
    // 0x12dd00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x12DCFCu, 0x12DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD04u;
label_12dd04:
    // 0x12dd04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12dd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12dd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd0c: 0xc051ec6  jal         func_147B18
    ctx->pc = 0x12DD0Cu;
    SET_GPR_U32(ctx, 31, 0x12DD14u);
    ctx->pc = 0x12DD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD0Cu;
    // 0x12dd10: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B18u, 0x12DD0Cu, 0x12DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD14u;
label_12dd14:
    // 0x12dd14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12DD14u;
    {
        const bool branch_taken_0x12dd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD14u;
        // 0x12dd18: 0x26150110  addiu       $s5, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd14) {
            ctx->pc = 0x12DD4Cu;
            goto label_12dd4c;
        }
    }
    ctx->pc = 0x12DD1Cu;
label_12dd1c:
    // 0x12dd1c: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x12DD1Cu;
    SET_GPR_U32(ctx, 31, 0x12DD24u);
    ctx->pc = 0x12DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD1Cu;
    // 0x12dd20: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x12DD1Cu, 0x12DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD24u;
label_12dd24:
    // 0x12dd24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12dd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd2c: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x12dd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x12dd30: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x12DD30u;
    SET_GPR_U32(ctx, 31, 0x12DD38u);
    ctx->pc = 0x12DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD30u;
    // 0x12dd34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x12DD30u, 0x12DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD38u;
label_12dd38:
    // 0x12dd38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12dd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12dd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd40: 0xc051ec6  jal         func_147B18
    ctx->pc = 0x12DD40u;
    SET_GPR_U32(ctx, 31, 0x12DD48u);
    ctx->pc = 0x12DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD40u;
    // 0x12dd44: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B18u, 0x12DD40u, 0x12DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD48u;
label_12dd48:
    // 0x12dd48: 0x26150110  addiu       $s5, $s0, 0x110
    ctx->pc = 0x12dd48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_12dd4c:
    // 0x12dd4c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x12dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x12dd50: 0x24522f40  addiu       $s2, $v0, 0x2F40
    ctx->pc = 0x12dd50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12096));
    // 0x12dd54: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x12dd54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12dd58: 0x26160020  addiu       $s6, $s0, 0x20
    ctx->pc = 0x12dd58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x12dd5c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x12dd5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd60: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12dd64: 0x0  nop
    ctx->pc = 0x12dd64u;
    // NOP
label_12dd68:
    // 0x12dd68: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x12dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dd6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd70: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x12dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dd74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12dd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12dd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd7c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x12dd7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x12dd80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12dd80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12dd84: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x12dd84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x12dd88: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x12dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dd8c: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x12dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dd90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12dd90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12dd94: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x12dd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x12dd98: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dd9c: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x12dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dda0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x12dda0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x12dda4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12dda4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12dda8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x12DDA8u;
    SET_GPR_U32(ctx, 31, 0x12DDB0u);
    ctx->pc = 0x12DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDA8u;
    // 0x12ddac: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12DDA8u, 0x12DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDB0u;
label_12ddb0:
    // 0x12ddb0: 0x681ffed  bgez        $s4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12DDB0u;
    {
        const bool branch_taken_0x12ddb0 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x12DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDB0u;
        // 0x12ddb4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddb0) {
            ctx->pc = 0x12DD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dd68;
        }
    }
    ctx->pc = 0x12DDB8u;
    // 0x12ddb8: 0x12750007  beq         $s3, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DDB8u;
    {
        const bool branch_taken_0x12ddb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x12ddb8) {
            ctx->pc = 0x12DDD8u;
            goto label_12ddd8;
        }
    }
    ctx->pc = 0x12DDC0u;
    // 0x12ddc0: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x12ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ddc4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x12ddc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x12ddc8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x12ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ddcc: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x12ddccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x12ddd0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x12ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ddd4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x12ddd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_12ddd8:
    // 0x12ddd8: 0x12d30007  beq         $s6, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DDD8u;
    {
        const bool branch_taken_0x12ddd8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 19));
        ctx->pc = 0x12DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDD8u;
        // 0x12dddc: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddd8) {
            ctx->pc = 0x12DDF8u;
            goto label_12ddf8;
        }
    }
    ctx->pc = 0x12DDE0u;
    // 0x12dde0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x12dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dde4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x12dde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x12dde8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x12dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ddec: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x12ddecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x12ddf0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ddf4: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x12ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_12ddf8:
    // 0x12ddf8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12ddfc: 0x0  nop
    ctx->pc = 0x12ddfcu;
    // NOP
label_12de00:
    // 0x12de00: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x12de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de04: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x12de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12de08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12de0c: 0x0  nop
    ctx->pc = 0x12de0cu;
    // NOP
    // 0x12de10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DE10u;
    {
        const bool branch_taken_0x12de10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12de10) {
            ctx->pc = 0x12DE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE10u;
            // 0x12de14: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE18u;
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DE18u;
label_12de18:
    // 0x12de18: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x12de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de1c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x12de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12de20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12de24: 0x0  nop
    ctx->pc = 0x12de24u;
    // NOP
    // 0x12de28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DE28u;
    {
        const bool branch_taken_0x12de28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12de28) {
            ctx->pc = 0x12DE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE28u;
            // 0x12de2c: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE30u;
            goto label_12de30;
        }
    }
    ctx->pc = 0x12DE30u;
label_12de30:
    // 0x12de30: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x12de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de34: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x12de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12de38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12de3c: 0x0  nop
    ctx->pc = 0x12de3cu;
    // NOP
    // 0x12de40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DE40u;
    {
        const bool branch_taken_0x12de40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12de40) {
            ctx->pc = 0x12DE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE40u;
            // 0x12de44: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE48u;
            goto label_12de48;
        }
    }
    ctx->pc = 0x12DE48u;
label_12de48:
    // 0x12de48: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x12de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de4c: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x12de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12de50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12de54: 0x0  nop
    ctx->pc = 0x12de54u;
    // NOP
    // 0x12de58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DE58u;
    {
        const bool branch_taken_0x12de58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12de58) {
            ctx->pc = 0x12DE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE58u;
            // 0x12de5c: 0xe6010020  swc1        $f1, 0x20($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE60u;
            goto label_12de60;
        }
    }
    ctx->pc = 0x12DE60u;
label_12de60:
    // 0x12de60: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x12de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de64: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x12de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12de68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12de6c: 0x0  nop
    ctx->pc = 0x12de6cu;
    // NOP
    // 0x12de70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DE70u;
    {
        const bool branch_taken_0x12de70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12de70) {
            ctx->pc = 0x12DE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE70u;
            // 0x12de74: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE78u;
            goto label_12de78;
        }
    }
    ctx->pc = 0x12DE78u;
label_12de78:
    // 0x12de78: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x12de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de7c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x12de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12de80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12de84: 0x0  nop
    ctx->pc = 0x12de84u;
    // NOP
    // 0x12de88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DE88u;
    {
        const bool branch_taken_0x12de88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12de88) {
            ctx->pc = 0x12DE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE88u;
            // 0x12de8c: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE90u;
            goto label_12de90;
        }
    }
    ctx->pc = 0x12DE90u;
label_12de90:
    // 0x12de90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12de90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12de94: 0x461ffda  bgez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x12DE94u;
    {
        const bool branch_taken_0x12de94 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x12DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE94u;
        // 0x12de98: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de94) {
            ctx->pc = 0x12DE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12de00;
        }
    }
    ctx->pc = 0x12DE9Cu;
    // 0x12de9c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12de9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12dea0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12dea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12dea4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12dea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dea8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12dea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12deac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x12deacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12deb0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12deb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12deb4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x12deb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12deb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12deb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12debc: 0x3e00008  jr          $ra
    ctx->pc = 0x12DEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEBCu;
        // 0x12dec0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DEC4u;
    // 0x12dec4: 0x0  nop
    ctx->pc = 0x12dec4u;
    // NOP
    // 0x12dec8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12decc: 0x0  nop
    ctx->pc = 0x12deccu;
    // NOP
    // 0x12ded0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ded4: 0x0  nop
    ctx->pc = 0x12ded4u;
    // NOP
    // 0x12ded8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12dedc: 0x0  nop
    ctx->pc = 0x12dedcu;
    // NOP
    // 0x12dee0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12dee4: 0x0  nop
    ctx->pc = 0x12dee4u;
    // NOP
    // 0x12dee8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12dee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12deec: 0x0  nop
    ctx->pc = 0x12deecu;
    // NOP
    ctx->pc = 0x12def0u;
}
