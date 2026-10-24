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

// Function: func_00185A20
// Address: 0x185a20 - 0x185bd0
void func_00185A20_0x185a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00185A20_0x185a20");
#endif

    switch (ctx->pc) {
        case 0x185a44u: goto label_185a44;
        case 0x185a54u: goto label_185a54;
        case 0x185a64u: goto label_185a64;
        case 0x185a74u: goto label_185a74;
        case 0x185accu: goto label_185acc;
        case 0x185b00u: goto label_185b00;
        case 0x185b34u: goto label_185b34;
        case 0x185b44u: goto label_185b44;
        case 0x185b6cu: goto label_185b6c;
        case 0x185b94u: goto label_185b94;
        case 0x185ba4u: goto label_185ba4;
        case 0x185bb0u: goto label_185bb0;
        case 0x185bbcu: goto label_185bbc;
        default: break;
    }

    ctx->pc = 0x185a20u;

    // 0x185a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185a3c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185A3Cu;
    SET_GPR_U32(ctx, 31, 0x185A44u);
    ctx->pc = 0x185A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A3Cu;
    // 0x185a40: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185A3Cu, 0x185A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A44u;
label_185a44:
    // 0x185a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a48: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x185a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x185a4c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185A4Cu;
    SET_GPR_U32(ctx, 31, 0x185A54u);
    ctx->pc = 0x185A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A4Cu;
    // 0x185a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185A4Cu, 0x185A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A54u;
label_185a54:
    // 0x185a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a58: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x185a5c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185A5Cu;
    SET_GPR_U32(ctx, 31, 0x185A64u);
    ctx->pc = 0x185A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A5Cu;
    // 0x185a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185A5Cu, 0x185A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A64u;
label_185a64:
    // 0x185a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x185a6c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185A6Cu;
    SET_GPR_U32(ctx, 31, 0x185A74u);
    ctx->pc = 0x185A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A6Cu;
    // 0x185a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185A6Cu, 0x185A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A74u;
label_185a74:
    // 0x185a74: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x185a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x185a78: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x185A78u;
    {
        const bool branch_taken_0x185a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A78u;
        // 0x185a7c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a78) {
            ctx->pc = 0x185BBCu;
            goto label_185bbc;
        }
    }
    ctx->pc = 0x185A80u;
    // 0x185a80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x185a84: 0x24422e20  addiu       $v0, $v0, 0x2E20
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11808));
    // 0x185a88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x185a8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x185a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185a90: 0x800008  jr          $a0
    ctx->pc = 0x185A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185A98u: goto label_185a98;
            case 0x185AA4u: goto label_185aa4;
            case 0x185AD8u: goto label_185ad8;
            case 0x185B0Cu: goto label_185b0c;
            case 0x185B4Cu: goto label_185b4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x185A98u;
label_185a98:
    // 0x185a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a9c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x185A9Cu;
    {
        const bool branch_taken_0x185a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A9Cu;
        // 0x185aa0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a9c) {
            ctx->pc = 0x185B3Cu;
            goto label_185b3c;
        }
    }
    ctx->pc = 0x185AA4u;
label_185aa4:
    // 0x185aa4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185aa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185aac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185ab0: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185ab4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ab8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185ab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185abc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185abcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ac0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185ac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ac4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185AC4u;
    SET_GPR_U32(ctx, 31, 0x185ACCu);
    ctx->pc = 0x185AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AC4u;
    // 0x185ac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185AC4u, 0x185ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185ACCu;
label_185acc:
    // 0x185acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ad0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x185AD0u;
    {
        const bool branch_taken_0x185ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AD0u;
        // 0x185ad4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ad0) {
            ctx->pc = 0x185B3Cu;
            goto label_185b3c;
        }
    }
    ctx->pc = 0x185AD8u;
label_185ad8:
    // 0x185ad8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185adc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185ae0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185ae4: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x185ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185ae8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185aec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185af0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185af0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185af4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185af4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185af8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185AF8u;
    SET_GPR_U32(ctx, 31, 0x185B00u);
    ctx->pc = 0x185AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AF8u;
    // 0x185afc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185AF8u, 0x185B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B00u;
label_185b00:
    // 0x185b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185B04u;
    {
        const bool branch_taken_0x185b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B04u;
        // 0x185b08: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b04) {
            ctx->pc = 0x185B3Cu;
            goto label_185b3c;
        }
    }
    ctx->pc = 0x185B0Cu;
label_185b0c:
    // 0x185b0c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185b10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185b14: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185b18: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x185b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185b1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b2c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185B2Cu;
    SET_GPR_U32(ctx, 31, 0x185B34u);
    ctx->pc = 0x185B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B2Cu;
    // 0x185b30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185B2Cu, 0x185B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B34u;
label_185b34:
    // 0x185b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b38: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x185b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_185b3c:
    // 0x185b3c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185B3Cu;
    SET_GPR_U32(ctx, 31, 0x185B44u);
    ctx->pc = 0x185B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B3Cu;
    // 0x185b40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185B3Cu, 0x185B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B44u;
label_185b44:
    // 0x185b44: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185B44u;
    {
        const bool branch_taken_0x185b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B44u;
        // 0x185b48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b44) {
            ctx->pc = 0x185BC0u;
            goto label_185bc0;
        }
    }
    ctx->pc = 0x185B4Cu;
label_185b4c:
    // 0x185b4c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185b50: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x185b54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x185b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x185b58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x185b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185b64: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185B64u;
    SET_GPR_U32(ctx, 31, 0x185B6Cu);
    ctx->pc = 0x185B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B64u;
    // 0x185b68: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185B64u, 0x185B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B6Cu;
label_185b6c:
    // 0x185b6c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185b70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185b7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185b80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b84: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185b88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185b8c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185B8Cu;
    SET_GPR_U32(ctx, 31, 0x185B94u);
    ctx->pc = 0x185B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B8Cu;
    // 0x185b90: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185B8Cu, 0x185B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B94u;
label_185b94:
    // 0x185b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x185b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x185b9c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185B9Cu;
    SET_GPR_U32(ctx, 31, 0x185BA4u);
    ctx->pc = 0x185BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B9Cu;
    // 0x185ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185B9Cu, 0x185BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BA4u;
label_185ba4:
    // 0x185ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ba8: 0xc06180e  jal         func_186038
    ctx->pc = 0x185BA8u;
    SET_GPR_U32(ctx, 31, 0x185BB0u);
    ctx->pc = 0x185BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BA8u;
    // 0x185bac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185BA8u, 0x185BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BB0u;
label_185bb0:
    // 0x185bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bb4: 0xc06180e  jal         func_186038
    ctx->pc = 0x185BB4u;
    SET_GPR_U32(ctx, 31, 0x185BBCu);
    ctx->pc = 0x185BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BB4u;
    // 0x185bb8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185BB4u, 0x185BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BBCu;
label_185bbc:
    // 0x185bbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185bc0:
    // 0x185bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x185BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC8u;
        // 0x185bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185BD0u;
}
