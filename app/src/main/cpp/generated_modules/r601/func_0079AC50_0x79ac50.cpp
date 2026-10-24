#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_0079AC50
// Address: 0x79ac50 - 0x79aec8
void func_0079AC50_0x79ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AC50_0x79ac50");
#endif

    switch (ctx->pc) {
        case 0x79ac98u: goto label_79ac98;
        case 0x79acc8u: goto label_79acc8;
        case 0x79acf0u: goto label_79acf0;
        case 0x79ad50u: goto label_79ad50;
        case 0x79ad80u: goto label_79ad80;
        case 0x79ada8u: goto label_79ada8;
        case 0x79add8u: goto label_79add8;
        case 0x79ae24u: goto label_79ae24;
        case 0x79ae30u: goto label_79ae30;
        case 0x79ae3cu: goto label_79ae3c;
        case 0x79ae4cu: goto label_79ae4c;
        case 0x79ae5cu: goto label_79ae5c;
        case 0x79ae68u: goto label_79ae68;
        case 0x79ae74u: goto label_79ae74;
        case 0x79ae88u: goto label_79ae88;
        case 0x79ae94u: goto label_79ae94;
        case 0x79aea0u: goto label_79aea0;
        case 0x79aeacu: goto label_79aeac;
        default: break;
    }

    ctx->pc = 0x79ac50u;

    // 0x79ac50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79ac54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79ac58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79ac5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79ac5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79ac64: 0x14a0002e  bnez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x79AC64u;
    {
        const bool branch_taken_0x79ac64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC64u;
        // 0x79ac68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac64) {
            ctx->pc = 0x79AD20u;
            goto label_79ad20;
        }
    }
    ctx->pc = 0x79AC6Cu;
    // 0x79ac6c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79ac70: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79ac74: 0x8044ba78  lb          $a0, -0x4588($v0)
    ctx->pc = 0x79ac74u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79BA78u));
    // 0x79ac78: 0x2446ba78  addiu       $a2, $v0, -0x4588
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949496));
    // 0x79ac7c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79ac7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79ac80: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79ac80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ac88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac8c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AC8Cu;
    {
        const bool branch_taken_0x79ac8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC8Cu;
        // 0x79ac90: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac8c) {
            ctx->pc = 0x79ACC0u;
            goto label_79acc0;
        }
    }
    ctx->pc = 0x79AC94u;
    // 0x79ac94: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ac94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79ac98:
    // 0x79ac98: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ac9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ac9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79aca0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79aca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79aca4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79aca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79aca8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79aca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79acac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79ACACu;
    {
        const bool branch_taken_0x79acac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACACu;
        // 0x79acb0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acac) {
            ctx->pc = 0x79ACC0u;
            goto label_79acc0;
        }
    }
    ctx->pc = 0x79ACB4u;
    // 0x79acb4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79acb8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79ACB8u;
    {
        const bool branch_taken_0x79acb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79acb8) {
            ctx->pc = 0x79ACBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACB8u;
            // 0x79acbc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac98;
        }
    }
    ctx->pc = 0x79ACC0u;
label_79acc0:
    // 0x79acc0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79ACC0u;
    SET_GPR_U32(ctx, 31, 0x79ACC8u);
    ctx->pc = 0x79ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACC0u;
    // 0x79acc4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79ACC0u, 0x79ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACC8u;
label_79acc8:
    // 0x79acc8: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79acc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x79accc: 0x8203ba80  lb          $v1, -0x4580($s0)
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294949504)));
    // 0x79acd0: 0x2604ba80  addiu       $a0, $s0, -0x4580
    ctx->pc = 0x79acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949504));
    // 0x79acd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79acd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79acd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acdc: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x79ACDCu;
    {
        const bool branch_taken_0x79acdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACDCu;
        // 0x79ace0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acdc) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79ACE4u;
    // 0x79ace4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79ace4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ace8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79acec: 0x0  nop
    ctx->pc = 0x79acecu;
    // NOP
label_79acf0:
    // 0x79acf0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79acf4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79acf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79acf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79acfc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79acfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ad00: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ad00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ad04: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x79AD04u;
    {
        const bool branch_taken_0x79ad04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD04u;
        // 0x79ad08: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad04) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79AD0Cu;
    // 0x79ad0c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ad10: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AD10u;
    {
        const bool branch_taken_0x79ad10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad10) {
            ctx->pc = 0x79AD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD10u;
            // 0x79ad14: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acf0;
        }
    }
    ctx->pc = 0x79AD18u;
    // 0x79ad18: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x79AD18u;
    {
        const bool branch_taken_0x79ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ad18) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79AD20u;
label_79ad20:
    // 0x79ad20: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79ad24: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79ad28: 0x8044ba88  lb          $a0, -0x4578($v0)
    ctx->pc = 0x79ad28u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79BA88u));
    // 0x79ad2c: 0x2446ba88  addiu       $a2, $v0, -0x4578
    ctx->pc = 0x79ad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949512));
    // 0x79ad30: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79ad34: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79ad34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ad38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ad3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad40: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79AD40u;
    {
        const bool branch_taken_0x79ad40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD40u;
        // 0x79ad44: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad40) {
            ctx->pc = 0x79AD78u;
            goto label_79ad78;
        }
    }
    ctx->pc = 0x79AD48u;
    // 0x79ad48: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ad48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ad4c: 0x0  nop
    ctx->pc = 0x79ad4cu;
    // NOP
label_79ad50:
    // 0x79ad50: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ad54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ad54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ad58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ad5c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ad60: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ad60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ad64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AD64u;
    {
        const bool branch_taken_0x79ad64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD64u;
        // 0x79ad68: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad64) {
            ctx->pc = 0x79AD78u;
            goto label_79ad78;
        }
    }
    ctx->pc = 0x79AD6Cu;
    // 0x79ad6c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ad6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ad70: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AD70u;
    {
        const bool branch_taken_0x79ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad70) {
            ctx->pc = 0x79AD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD70u;
            // 0x79ad74: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad50;
        }
    }
    ctx->pc = 0x79AD78u;
label_79ad78:
    // 0x79ad78: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AD78u;
    SET_GPR_U32(ctx, 31, 0x79AD80u);
    ctx->pc = 0x79AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD78u;
    // 0x79ad7c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AD78u, 0x79AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD80u;
label_79ad80:
    // 0x79ad80: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79ad80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x79ad84: 0x8203ba90  lb          $v1, -0x4570($s0)
    ctx->pc = 0x79ad84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294949520)));
    // 0x79ad88: 0x2604ba90  addiu       $a0, $s0, -0x4570
    ctx->pc = 0x79ad88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949520));
    // 0x79ad8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79ad8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad94: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79AD94u;
    {
        const bool branch_taken_0x79ad94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD94u;
        // 0x79ad98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad94) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79AD9Cu;
    // 0x79ad9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79ad9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ada0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ada0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ada4: 0x0  nop
    ctx->pc = 0x79ada4u;
    // NOP
label_79ada8:
    // 0x79ada8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79adac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79adacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79adb0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79adb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79adb4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79adb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79adb8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79adb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79adbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79ADBCu;
    {
        const bool branch_taken_0x79adbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADBCu;
        // 0x79adc0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adbc) {
            ctx->pc = 0x79ADD0u;
            goto label_79add0;
        }
    }
    ctx->pc = 0x79ADC4u;
    // 0x79adc4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79adc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79adc8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79ADC8u;
    {
        const bool branch_taken_0x79adc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79adc8) {
            ctx->pc = 0x79ADCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADC8u;
            // 0x79adcc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ada8;
        }
    }
    ctx->pc = 0x79ADD0u;
label_79add0:
    // 0x79add0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79ADD0u;
    SET_GPR_U32(ctx, 31, 0x79ADD8u);
    ctx->pc = 0x79ADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADD0u;
    // 0x79add4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79ADD0u, 0x79ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADD8u;
label_79add8:
    // 0x79add8: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x79ADD8u;
    {
        const bool branch_taken_0x79add8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD8u;
        // 0x79addc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79add8) {
            ctx->pc = 0x79AEACu;
            goto label_79aeac;
        }
    }
    ctx->pc = 0x79ADE0u;
    // 0x79ade0: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x79ADE0u;
    {
        const bool branch_taken_0x79ade0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE0u;
        // 0x79ade4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ade0) {
            ctx->pc = 0x79AEACu;
            goto label_79aeac;
        }
    }
    ctx->pc = 0x79ADE8u;
    // 0x79ade8: 0x12420024  beq         $s2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x79ADE8u;
    {
        const bool branch_taken_0x79ade8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x79ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADE8u;
        // 0x79adec: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ade8) {
            ctx->pc = 0x79AE7Cu;
            goto label_79ae7c;
        }
    }
    ctx->pc = 0x79ADF0u;
    // 0x79adf0: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x79ADF0u;
    {
        const bool branch_taken_0x79adf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79adf0) {
            ctx->pc = 0x79ADF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADF0u;
            // 0x79adf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AEB0u;
            goto label_79aeb0;
        }
    }
    ctx->pc = 0x79ADF8u;
    // 0x79adf8: 0x5640002d  bnel        $s2, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x79ADF8u;
    {
        const bool branch_taken_0x79adf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x79adf8) {
            ctx->pc = 0x79ADFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADF8u;
            // 0x79adfc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AEB0u;
            goto label_79aeb0;
        }
    }
    ctx->pc = 0x79AE00u;
    // 0x79ae00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ae04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ae04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ae08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ae0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ae0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79ae10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae14: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x79ae14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79ae18: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ae1c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AE1Cu;
    SET_GPR_U32(ctx, 31, 0x79AE24u);
    ctx->pc = 0x79AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE1Cu;
    // 0x79ae20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AE1Cu, 0x79AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE24u;
label_79ae24:
    // 0x79ae24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae28: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AE28u;
    SET_GPR_U32(ctx, 31, 0x79AE30u);
    ctx->pc = 0x79AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE28u;
    // 0x79ae2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AE28u, 0x79AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE30u;
label_79ae30:
    // 0x79ae30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae34: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AE34u;
    SET_GPR_U32(ctx, 31, 0x79AE3Cu);
    ctx->pc = 0x79AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE34u;
    // 0x79ae38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AE34u, 0x79AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE3Cu;
label_79ae3c:
    // 0x79ae3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae44: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79AE44u;
    SET_GPR_U32(ctx, 31, 0x79AE4Cu);
    ctx->pc = 0x79AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE44u;
    // 0x79ae48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79AE44u, 0x79AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE4Cu;
label_79ae4c:
    // 0x79ae4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae54: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79AE54u;
    SET_GPR_U32(ctx, 31, 0x79AE5Cu);
    ctx->pc = 0x79AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE54u;
    // 0x79ae58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79AE54u, 0x79AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE5Cu;
label_79ae5c:
    // 0x79ae5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae60: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AE60u;
    SET_GPR_U32(ctx, 31, 0x79AE68u);
    ctx->pc = 0x79AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE60u;
    // 0x79ae64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AE60u, 0x79AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE68u;
label_79ae68:
    // 0x79ae68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae6c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AE6Cu;
    SET_GPR_U32(ctx, 31, 0x79AE74u);
    ctx->pc = 0x79AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE6Cu;
    // 0x79ae70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AE6Cu, 0x79AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE74u;
label_79ae74:
    // 0x79ae74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79AE74u;
    {
        const bool branch_taken_0x79ae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE74u;
        // 0x79ae78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae74) {
            ctx->pc = 0x79AEB0u;
            goto label_79aeb0;
        }
    }
    ctx->pc = 0x79AE7Cu;
label_79ae7c:
    // 0x79ae7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae80: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79AE80u;
    SET_GPR_U32(ctx, 31, 0x79AE88u);
    ctx->pc = 0x79AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE80u;
    // 0x79ae84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79AE80u, 0x79AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE88u;
label_79ae88:
    // 0x79ae88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae8c: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79AE8Cu;
    SET_GPR_U32(ctx, 31, 0x79AE94u);
    ctx->pc = 0x79AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE8Cu;
    // 0x79ae90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79AE8Cu, 0x79AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE94u;
label_79ae94:
    // 0x79ae94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae98: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AE98u;
    SET_GPR_U32(ctx, 31, 0x79AEA0u);
    ctx->pc = 0x79AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE98u;
    // 0x79ae9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AE98u, 0x79AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEA0u;
label_79aea0:
    // 0x79aea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aea4: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AEA4u;
    SET_GPR_U32(ctx, 31, 0x79AEACu);
    ctx->pc = 0x79AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEA4u;
    // 0x79aea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AEA4u, 0x79AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEACu;
label_79aeac:
    // 0x79aeac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79aeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79aeb0:
    // 0x79aeb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79aeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79aeb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79aeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aebc: 0x3e00008  jr          $ra
    ctx->pc = 0x79AEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEBCu;
        // 0x79aec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AEC4u;
    // 0x79aec4: 0x0  nop
    ctx->pc = 0x79aec4u;
    // NOP
    ctx->pc = 0x79aec8u;
}
} // namespace gh_r601
