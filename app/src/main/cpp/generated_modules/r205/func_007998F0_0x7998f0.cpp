#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_007998F0
// Address: 0x7998f0 - 0x799a98
void func_007998F0_0x7998f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007998F0_0x7998f0");
#endif

    switch (ctx->pc) {
        case 0x799940u: goto label_799940;
        case 0x799970u: goto label_799970;
        case 0x799998u: goto label_799998;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999f0u: goto label_7999f0;
        case 0x799a20u: goto label_799a20;
        case 0x799a34u: goto label_799a34;
        case 0x799a44u: goto label_799a44;
        case 0x799a58u: goto label_799a58;
        case 0x799a68u: goto label_799a68;
        case 0x799a78u: goto label_799a78;
        default: break;
    }

    ctx->pc = 0x7998f0u;

    // 0x7998f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7998f4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7998f8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7998fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7998fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799900: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799904: 0x2446a5a0  addiu       $a2, $v0, -0x5A60
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944160));
    // 0x799908: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79990c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799910: 0x8044a5a0  lb          $a0, -0x5A60($v0)
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A5A0u));
    // 0x799914: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x799914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799918: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79991c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79991cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799920: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79992c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799930: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799930u;
    {
        const bool branch_taken_0x799930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799930u;
        // 0x799934: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799930) {
            ctx->pc = 0x799968u;
            goto label_799968;
        }
    }
    ctx->pc = 0x799938u;
    // 0x799938: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79993c: 0x0  nop
    ctx->pc = 0x79993cu;
    // NOP
label_799940:
    // 0x799940: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799944: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799948: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79994c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799950: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799954u;
    {
        const bool branch_taken_0x799954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799954) {
            ctx->pc = 0x799968u;
            goto label_799968;
        }
    }
    ctx->pc = 0x79995Cu;
    // 0x79995c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799960: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799960u;
    {
        const bool branch_taken_0x799960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799960) {
            ctx->pc = 0x799964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799960u;
            // 0x799964: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799940;
        }
    }
    ctx->pc = 0x799968u;
label_799968:
    // 0x799968: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799968u;
    SET_GPR_U32(ctx, 31, 0x799970u);
    ctx->pc = 0x79996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799968u;
    // 0x79996c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799968u, 0x799970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799974: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x799978: 0x8202a5a8  lb          $v0, -0x5A58($s0)
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294944168)));
    // 0x79997c: 0x2603a5a8  addiu       $v1, $s0, -0x5A58
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944168));
    // 0x799980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799984: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799984u;
    {
        const bool branch_taken_0x799984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799984) {
            ctx->pc = 0x7999C0u;
            goto label_7999c0;
        }
    }
    ctx->pc = 0x79998Cu;
    // 0x79998c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79998cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799990: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799994: 0x0  nop
    ctx->pc = 0x799994u;
    // NOP
label_799998:
    // 0x799998: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79999c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7999a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7999a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7999a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7999a8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7999ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7999ACu;
    {
        const bool branch_taken_0x7999ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ac) {
            ctx->pc = 0x7999C0u;
            goto label_7999c0;
        }
    }
    ctx->pc = 0x7999B4u;
    // 0x7999b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7999b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7999B8u;
    {
        const bool branch_taken_0x7999b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999b8) {
            ctx->pc = 0x7999BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999B8u;
            // 0x7999bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799998;
        }
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7999C0u;
    SET_GPR_U32(ctx, 31, 0x7999C8u);
    ctx->pc = 0x7999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C0u;
    // 0x7999c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7999C0u, 0x7999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C8u;
label_7999c8:
    // 0x7999c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7999c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999cc: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x7999d0: 0x8262a5b0  lb          $v0, -0x5A50($s3)
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294944176)));
    // 0x7999d4: 0x2663a5b0  addiu       $v1, $s3, -0x5A50
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944176));
    // 0x7999d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7999DCu;
    {
        const bool branch_taken_0x7999dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999dc) {
            ctx->pc = 0x799A18u;
            goto label_799a18;
        }
    }
    ctx->pc = 0x7999E4u;
    // 0x7999e4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7999e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999e8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7999ec: 0x0  nop
    ctx->pc = 0x7999ecu;
    // NOP
label_7999f0:
    // 0x7999f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7999f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7999f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7999fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7999fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799a00: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799a04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A04u;
    {
        const bool branch_taken_0x799a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A04u;
        // 0x799a08: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a04) {
            ctx->pc = 0x799A18u;
            goto label_799a18;
        }
    }
    ctx->pc = 0x799A0Cu;
    // 0x799a0c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a10: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799A10u;
    {
        const bool branch_taken_0x799a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a10) {
            ctx->pc = 0x799A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A10u;
            // 0x799a14: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999f0;
        }
    }
    ctx->pc = 0x799A18u;
label_799a18:
    // 0x799a18: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A20u;
    {
        const bool branch_taken_0x799a20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A20u;
        // 0x799a24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a20) {
            ctx->pc = 0x799A34u;
            goto label_799a34;
        }
    }
    ctx->pc = 0x799A28u;
    // 0x799a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a2c: 0xc06d9a0  jal         func_1B6680
    ctx->pc = 0x799A2Cu;
    SET_GPR_U32(ctx, 31, 0x799A34u);
    ctx->pc = 0x799A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A2Cu;
    // 0x799a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6680u, 0x799A2Cu, 0x799A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A34u;
    {
        const bool branch_taken_0x799a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A34u;
        // 0x799a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a34) {
            ctx->pc = 0x799A44u;
            goto label_799a44;
        }
    }
    ctx->pc = 0x799A3Cu;
    // 0x799a3c: 0xc06d9a0  jal         func_1B6680
    ctx->pc = 0x799A3Cu;
    SET_GPR_U32(ctx, 31, 0x799A44u);
    ctx->pc = 0x799A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A3Cu;
    // 0x799a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6680u, 0x799A3Cu, 0x799A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A44u;
label_799a44:
    // 0x799a44: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799A44u;
    {
        const bool branch_taken_0x799a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a44) {
            ctx->pc = 0x799A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A44u;
            // 0x799a48: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A5Cu;
            goto label_799a5c;
        }
    }
    ctx->pc = 0x799A4Cu;
    // 0x799a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a50: 0xc06d9a0  jal         func_1B6680
    ctx->pc = 0x799A50u;
    SET_GPR_U32(ctx, 31, 0x799A58u);
    ctx->pc = 0x799A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A50u;
    // 0x799a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6680u, 0x799A50u, 0x799A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A58u;
label_799a58:
    // 0x799a58: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799a5c:
    // 0x799a5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799a60: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799A60u;
    SET_GPR_U32(ctx, 31, 0x799A68u);
    ctx->pc = 0x799A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A60u;
    // 0x799a64: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799A60u, 0x799A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A68u;
label_799a68:
    // 0x799a68: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799a6c: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799a70: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799A70u;
    SET_GPR_U32(ctx, 31, 0x799A78u);
    ctx->pc = 0x799A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A70u;
    // 0x799a74: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A70u, 0x799A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A78u;
label_799a78:
    // 0x799a78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799a7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799a80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799a84: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799a88: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799a90: 0x3e00008  jr          $ra
    ctx->pc = 0x799A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A98u;
}
} // namespace gh_r205
