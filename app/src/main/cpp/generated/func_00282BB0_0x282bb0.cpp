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

// Function: func_00282BB0
// Address: 0x282bb0 - 0x282d68
void func_00282BB0_0x282bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282BB0_0x282bb0");
#endif

    switch (ctx->pc) {
        case 0x282bccu: goto label_282bcc;
        case 0x282be0u: goto label_282be0;
        case 0x282c78u: goto label_282c78;
        case 0x282ca8u: goto label_282ca8;
        case 0x282cbcu: goto label_282cbc;
        case 0x282cf8u: goto label_282cf8;
        case 0x282d28u: goto label_282d28;
        case 0x282d3cu: goto label_282d3c;
        default: break;
    }

    ctx->pc = 0x282bb0u;

    // 0x282bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282bb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x282bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x282bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282bc4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x282BC4u;
    SET_GPR_U32(ctx, 31, 0x282BCCu);
    ctx->pc = 0x282BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282BC4u;
    // 0x282bc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x282BC4u, 0x282BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282BCCu;
label_282bcc:
    // 0x282bcc: 0xc44005a8  lwc1        $f0, 0x5A8($v0)
    ctx->pc = 0x282bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bd4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x282bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x282bd8: 0xc0560a2  jal         func_158288
    ctx->pc = 0x282BD8u;
    SET_GPR_U32(ctx, 31, 0x282BE0u);
    ctx->pc = 0x282BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282BD8u;
    // 0x282bdc: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x282BD8u, 0x282BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282BE0u;
label_282be0:
    // 0x282be0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x282be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282be4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x282be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x282be8: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x282BE8u;
    {
        const bool branch_taken_0x282be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BE8u;
        // 0x282bec: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282be8) {
            ctx->pc = 0x282D54u;
            goto label_282d54;
        }
    }
    ctx->pc = 0x282BF0u;
    // 0x282bf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x282bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x282bf4: 0x24428750  addiu       $v0, $v0, -0x78B0
    ctx->pc = 0x282bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936400));
    // 0x282bf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x282bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282bfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x282bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282c00: 0x800008  jr          $a0
    ctx->pc = 0x282C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282C08u: goto label_282c08;
            case 0x282C44u: goto label_282c44;
            case 0x282CB4u: goto label_282cb4;
            case 0x282CC4u: goto label_282cc4;
            case 0x282D34u: goto label_282d34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x282C08u;
label_282c08:
    // 0x282c08: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282c0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x282C0Cu;
    {
        const bool branch_taken_0x282c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C0Cu;
        // 0x282c10: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c0c) {
            ctx->pc = 0x282C2Cu;
            goto label_282c2c;
        }
    }
    ctx->pc = 0x282C14u;
    // 0x282c14: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282c18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c20: 0x8cc50180  lw          $a1, 0x180($a2)
    ctx->pc = 0x282c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x282c24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282C24u;
    {
        const bool branch_taken_0x282c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C24u;
        // 0x282c28: 0x8cc20184  lw          $v0, 0x184($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c24) {
            ctx->pc = 0x282C64u;
            goto label_282c64;
        }
    }
    ctx->pc = 0x282C2Cu;
label_282c2c:
    // 0x282c2c: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282c30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c38: 0x8cc50168  lw          $a1, 0x168($a2)
    ctx->pc = 0x282c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 360)));
    // 0x282c3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x282C3Cu;
    {
        const bool branch_taken_0x282c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C3Cu;
        // 0x282c40: 0x8cc2016c  lw          $v0, 0x16C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c3c) {
            ctx->pc = 0x282C94u;
            goto label_282c94;
        }
    }
    ctx->pc = 0x282C44u;
label_282c44:
    // 0x282c44: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282c48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282C48u;
    {
        const bool branch_taken_0x282c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C48u;
        // 0x282c4c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c48) {
            ctx->pc = 0x282C80u;
            goto label_282c80;
        }
    }
    ctx->pc = 0x282C50u;
    // 0x282c50: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282c54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c5c: 0x8cc50188  lw          $a1, 0x188($a2)
    ctx->pc = 0x282c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 392)));
    // 0x282c60: 0x8cc2018c  lw          $v0, 0x18C($a2)
    ctx->pc = 0x282c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
label_282c64:
    // 0x282c64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282c6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282c6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c70: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282C70u;
    SET_GPR_U32(ctx, 31, 0x282C78u);
    ctx->pc = 0x282C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C70u;
    // 0x282c74: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282C70u, 0x282C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C78u;
label_282c78:
    // 0x282c78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282C78u;
    {
        const bool branch_taken_0x282c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C78u;
        // 0x282c7c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c78) {
            ctx->pc = 0x282CACu;
            goto label_282cac;
        }
    }
    ctx->pc = 0x282C80u;
label_282c80:
    // 0x282c80: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282c84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c8c: 0x8cc50170  lw          $a1, 0x170($a2)
    ctx->pc = 0x282c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 368)));
    // 0x282c90: 0x8cc20174  lw          $v0, 0x174($a2)
    ctx->pc = 0x282c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
label_282c94:
    // 0x282c94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c98: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282c9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ca0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282CA0u;
    SET_GPR_U32(ctx, 31, 0x282CA8u);
    ctx->pc = 0x282CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CA0u;
    // 0x282ca4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282CA0u, 0x282CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CA8u;
label_282ca8:
    // 0x282ca8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282cac:
    // 0x282cac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282cb0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282cb4:
    // 0x282cb4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282CB4u;
    SET_GPR_U32(ctx, 31, 0x282CBCu);
    ctx->pc = 0x282CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CB4u;
    // 0x282cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282CB4u, 0x282CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CBCu;
label_282cbc:
    // 0x282cbc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x282CBCu;
    {
        const bool branch_taken_0x282cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CBCu;
        // 0x282cc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cbc) {
            ctx->pc = 0x282D58u;
            goto label_282d58;
        }
    }
    ctx->pc = 0x282CC4u;
label_282cc4:
    // 0x282cc4: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282cc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282CC8u;
    {
        const bool branch_taken_0x282cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CC8u;
        // 0x282ccc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cc8) {
            ctx->pc = 0x282D00u;
            goto label_282d00;
        }
    }
    ctx->pc = 0x282CD0u;
    // 0x282cd0: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282cd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282cdc: 0x8cc50190  lw          $a1, 0x190($a2)
    ctx->pc = 0x282cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 400)));
    // 0x282ce0: 0x8cc20194  lw          $v0, 0x194($a2)
    ctx->pc = 0x282ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 404)));
    // 0x282ce4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282ce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ce8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282cec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282cf0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282CF0u;
    SET_GPR_U32(ctx, 31, 0x282CF8u);
    ctx->pc = 0x282CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CF0u;
    // 0x282cf4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282CF0u, 0x282CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CF8u;
label_282cf8:
    // 0x282cf8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282CF8u;
    {
        const bool branch_taken_0x282cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CF8u;
        // 0x282cfc: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cf8) {
            ctx->pc = 0x282D2Cu;
            goto label_282d2c;
        }
    }
    ctx->pc = 0x282D00u;
label_282d00:
    // 0x282d00: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282d04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d0c: 0x8cc50178  lw          $a1, 0x178($a2)
    ctx->pc = 0x282d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 376)));
    // 0x282d10: 0x8cc2017c  lw          $v0, 0x17C($a2)
    ctx->pc = 0x282d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 380)));
    // 0x282d14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282d14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d18: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282d1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d20: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282D20u;
    SET_GPR_U32(ctx, 31, 0x282D28u);
    ctx->pc = 0x282D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D20u;
    // 0x282d24: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282D20u, 0x282D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D28u;
label_282d28:
    // 0x282d28: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282d2c:
    // 0x282d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282d30: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282d34:
    // 0x282d34: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282D34u;
    SET_GPR_U32(ctx, 31, 0x282D3Cu);
    ctx->pc = 0x282D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D34u;
    // 0x282d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282D34u, 0x282D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D3Cu;
label_282d3c:
    // 0x282d3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282D3Cu;
    {
        const bool branch_taken_0x282d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282d3c) {
            ctx->pc = 0x282D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282D3Cu;
            // 0x282d40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282D58u;
            goto label_282d58;
        }
    }
    ctx->pc = 0x282D44u;
    // 0x282d44: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x282d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x282d48: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x282d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x282d4c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x282d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x282d50: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x282d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_282d54:
    // 0x282d54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x282d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_282d58:
    // 0x282d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d60: 0x3e00008  jr          $ra
    ctx->pc = 0x282D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282D60u;
        // 0x282d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282D68u;
}
