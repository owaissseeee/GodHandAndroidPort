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

// Function: func_003AEA00
// Address: 0x3aea00 - 0x3aeb38
void func_003AEA00_0x3aea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AEA00_0x3aea00");
#endif

    switch (ctx->pc) {
        case 0x3aea60u: goto label_3aea60;
        case 0x3aea84u: goto label_3aea84;
        case 0x3aeaa8u: goto label_3aeaa8;
        case 0x3aeac0u: goto label_3aeac0;
        case 0x3aeae8u: goto label_3aeae8;
        case 0x3aeb04u: goto label_3aeb04;
        default: break;
    }

    ctx->pc = 0x3aea00u;

    // 0x3aea00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3aea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3aea04: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3aea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3aea08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3aea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3aea0c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3aea0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aea10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3aea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3aea14: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x3aea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3aea18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3aea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3aea1c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3aea1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3aea20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3aea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3aea24: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3aea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3aea28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3aea28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aea2c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3aea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3aea30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3aea30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aea34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aea38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3aea38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aea3c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AEA3Cu;
    {
        const bool branch_taken_0x3aea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aea3c) {
            ctx->pc = 0x3AEA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEA3Cu;
            // 0x3aea40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA44u;
            goto label_3aea44;
        }
    }
    ctx->pc = 0x3AEA44u;
label_3aea44:
    // 0x3aea44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3aea44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aea48: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3aea48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aea4c: 0x1812  mflo        $v1
    ctx->pc = 0x3aea4cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3aea50: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3aea50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3aea54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AEA54u;
    {
        const bool branch_taken_0x3aea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA54u;
        // 0x3aea58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea54) {
            ctx->pc = 0x3AEA78u;
            goto label_3aea78;
        }
    }
    ctx->pc = 0x3AEA5Cu;
    // 0x3aea5c: 0x0  nop
    ctx->pc = 0x3aea5cu;
    // NOP
label_3aea60:
    // 0x3aea60: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3aea60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3aea64: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3aea64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3aea68: 0x0  nop
    ctx->pc = 0x3aea68u;
    // NOP
    // 0x3aea6c: 0x0  nop
    ctx->pc = 0x3aea6cu;
    // NOP
    // 0x3aea70: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AEA70u;
    {
        const bool branch_taken_0x3aea70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA70u;
        // 0x3aea74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea70) {
            ctx->pc = 0x3AEA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aea60;
        }
    }
    ctx->pc = 0x3AEA78u;
label_3aea78:
    // 0x3aea78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aea7c: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3AEA7Cu;
    SET_GPR_U32(ctx, 31, 0x3AEA84u);
    ctx->pc = 0x3AEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA7Cu;
    // 0x3aea80: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AEA7Cu, 0x3AEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA84u;
label_3aea84:
    // 0x3aea84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3aea84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aea88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3aea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aea8c: 0xacb50014  sw          $s5, 0x14($a1)
    ctx->pc = 0x3aea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 21));
    // 0x3aea90: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x3aea90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aea94: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AEA94u;
    {
        const bool branch_taken_0x3aea94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA94u;
        // 0x3aea98: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea94) {
            ctx->pc = 0x3AEAD8u;
            goto label_3aead8;
        }
    }
    ctx->pc = 0x3AEA9Cu;
    // 0x3aea9c: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x3aea9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x3aeaa0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x3aeaa0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aeaa4: 0x0  nop
    ctx->pc = 0x3aeaa4u;
    // NOP
label_3aeaa8:
    // 0x3aeaa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aeaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeaac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3aeaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3aeab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3aeab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3aeab4: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x3aeab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3aeab8: 0xc0eba3e  jal         func_3AE8F8
    ctx->pc = 0x3AEAB8u;
    SET_GPR_U32(ctx, 31, 0x3AEAC0u);
    ctx->pc = 0x3AEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAB8u;
    // 0x3aeabc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8F8u, 0x3AEAB8u, 0x3AEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEAC0u;
label_3aeac0:
    // 0x3aeac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3aeac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeac4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3aeac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3aeac8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3AEAC8u;
    {
        const bool branch_taken_0x3aeac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeac8) {
            ctx->pc = 0x3AEACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEAC8u;
            // 0x3aeacc: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aeaa8;
        }
    }
    ctx->pc = 0x3AEAD0u;
    // 0x3aead0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AEAD0u;
    {
        const bool branch_taken_0x3aead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAD0u;
        // 0x3aead4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aead0) {
            ctx->pc = 0x3AEADCu;
            goto label_3aeadc;
        }
    }
    ctx->pc = 0x3AEAD8u;
label_3aead8:
    // 0x3aead8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x3aead8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_3aeadc:
    // 0x3aeadc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3aeadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3aeae0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AEAE0u;
    {
        const bool branch_taken_0x3aeae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAE0u;
        // 0x3aeae4: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeae0) {
            ctx->pc = 0x3AEB0Cu;
            goto label_3aeb0c;
        }
    }
    ctx->pc = 0x3AEAE8u;
label_3aeae8:
    // 0x3aeae8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x3aeae8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aeaec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aeaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeaf0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3aeaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3aeaf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3aeaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3aeaf8: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x3aeaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3aeafc: 0xc0eba3e  jal         func_3AE8F8
    ctx->pc = 0x3AEAFCu;
    SET_GPR_U32(ctx, 31, 0x3AEB04u);
    ctx->pc = 0x3AEB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAFCu;
    // 0x3aeb00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8F8u, 0x3AEAFCu, 0x3AEB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB04u;
label_3aeb04:
    // 0x3aeb04: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3AEB04u;
    {
        const bool branch_taken_0x3aeb04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB04u;
        // 0x3aeb08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb04) {
            ctx->pc = 0x3AEAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aeae8;
        }
    }
    ctx->pc = 0x3AEB0Cu;
label_3aeb0c:
    // 0x3aeb0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3aeb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3aeb10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3aeb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeb14: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3aeb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aeb18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3aeb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aeb1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3aeb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aeb20: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3aeb20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aeb24: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3aeb24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aeb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aeb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aeb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB2Cu;
        // 0x3aeb30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEB34u;
    // 0x3aeb34: 0x0  nop
    ctx->pc = 0x3aeb34u;
    // NOP
    ctx->pc = 0x3aeb38u;
}
