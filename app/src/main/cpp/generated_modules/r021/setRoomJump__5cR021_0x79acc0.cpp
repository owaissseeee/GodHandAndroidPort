#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: setRoomJump__5cR021
// Address: 0x79acc0 - 0x79ad90
void setRoomJump__5cR021_0x79acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setRoomJump__5cR021_0x79acc0");
#endif

    switch (ctx->pc) {
        case 0x79ace8u: goto label_79ace8;
        case 0x79ad00u: goto label_79ad00;
        default: break;
    }

    ctx->pc = 0x79acc0u;

    // 0x79acc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79acc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79acc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79acc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79accc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79acd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79acd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79acd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79acdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79ACDCu;
    {
        const bool branch_taken_0x79acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACDCu;
        // 0x79ace0: 0x3c120057  lui         $s2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acdc) {
            ctx->pc = 0x79ACECu;
            goto label_79acec;
        }
    }
    ctx->pc = 0x79ACE4u;
    // 0x79ace4: 0x0  nop
    ctx->pc = 0x79ace4u;
    // NOP
label_79ace8:
    // 0x79ace8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x79ace8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_79acec:
    // 0x79acec: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x79acecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x79acf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ACF0u;
    {
        const bool branch_taken_0x79acf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF0u;
        // 0x79acf4: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acf0) {
            ctx->pc = 0x79AD08u;
            goto label_79ad08;
        }
    }
    ctx->pc = 0x79ACF8u;
    // 0x79acf8: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79ACF8u;
    SET_GPR_U32(ctx, 31, 0x79AD00u);
    ctx->pc = 0x79ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF8u;
    // 0x79acfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79ACF8u, 0x79AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD00u;
label_79ad00:
    // 0x79ad00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79AD00u;
    {
        const bool branch_taken_0x79ad00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD00u;
        // 0x79ad04: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad00) {
            ctx->pc = 0x79ACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ace8;
        }
    }
    ctx->pc = 0x79AD08u;
label_79ad08:
    // 0x79ad08: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79ad0c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x79ad0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x79ad10: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79ad14: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x79ad14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ad18: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x79AD18u;
    {
        const bool branch_taken_0x79ad18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD18u;
        // 0x79ad1c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad18) {
            ctx->pc = 0x79AD78u;
            goto label_79ad78;
        }
    }
    ctx->pc = 0x79AD20u;
    // 0x79ad20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79ad24: 0x2442bd20  addiu       $v0, $v0, -0x42E0
    ctx->pc = 0x79ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950176));
    // 0x79ad28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79ad2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ad30: 0x800008  jr          $a0
    ctx->pc = 0x79AD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79AD38u: goto label_79ad38;
            case 0x79AD40u: goto label_79ad40;
            case 0x79AD48u: goto label_79ad48;
            case 0x79AD50u: goto label_79ad50;
            case 0x79AD58u: goto label_79ad58;
            case 0x79AD60u: goto label_79ad60;
            case 0x79AD68u: goto label_79ad68;
            case 0x79AD70u: goto label_79ad70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79AD38u;
label_79ad38:
    // 0x79ad38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79AD38u;
    {
        const bool branch_taken_0x79ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD38u;
        // 0x79ad3c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad38) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD40u;
label_79ad40:
    // 0x79ad40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79AD40u;
    {
        const bool branch_taken_0x79ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD40u;
        // 0x79ad44: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad40) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD48u;
label_79ad48:
    // 0x79ad48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79AD48u;
    {
        const bool branch_taken_0x79ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD48u;
        // 0x79ad4c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad48) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD50u;
label_79ad50:
    // 0x79ad50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79AD50u;
    {
        const bool branch_taken_0x79ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD50u;
        // 0x79ad54: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad50) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD58u;
label_79ad58:
    // 0x79ad58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AD58u;
    {
        const bool branch_taken_0x79ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD58u;
        // 0x79ad5c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad58) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD60u;
label_79ad60:
    // 0x79ad60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79AD60u;
    {
        const bool branch_taken_0x79ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD60u;
        // 0x79ad64: 0x24020700  addiu       $v0, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad60) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD68u;
label_79ad68:
    // 0x79ad68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AD68u;
    {
        const bool branch_taken_0x79ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD68u;
        // 0x79ad6c: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad68) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD70u;
label_79ad70:
    // 0x79ad70: 0x24020806  addiu       $v0, $zero, 0x806
    ctx->pc = 0x79ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
label_79ad74:
    // 0x79ad74: 0xa6220128  sh          $v0, 0x128($s1)
    ctx->pc = 0x79ad74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 296), (uint16_t)GPR_U32(ctx, 2));
label_79ad78:
    // 0x79ad78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79ad78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ad7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79ad7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ad80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79ad80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ad84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD88u;
        // 0x79ad8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD90u;
}
} // namespace gh_r021
