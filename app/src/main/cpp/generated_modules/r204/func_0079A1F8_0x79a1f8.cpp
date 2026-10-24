#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079A1F8
// Address: 0x79a1f8 - 0x79a358
void func_0079A1F8_0x79a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A1F8_0x79a1f8");
#endif

    switch (ctx->pc) {
        case 0x79a240u: goto label_79a240;
        case 0x79a250u: goto label_79a250;
        case 0x79a258u: goto label_79a258;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a288u: goto label_79a288;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a32cu: goto label_79a32c;
        default: break;
    }

    ctx->pc = 0x79a1f8u;

    // 0x79a1f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79a1fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79a200: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79a204: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a208: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79a208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79a20c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79a210: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79a214: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x79a218: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79a21c: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x79a220: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79a224: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x79a228: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x79a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x79a22c: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x79a230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a234: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A234u;
    {
        const bool branch_taken_0x79a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A234u;
        // 0x79a238: 0x3c160075  lui         $s6, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a234) {
            ctx->pc = 0x79A250u;
            goto label_79a250;
        }
    }
    ctx->pc = 0x79A23Cu;
    // 0x79a23c: 0x0  nop
    ctx->pc = 0x79a23cu;
    // NOP
label_79a240:
    // 0x79a240: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a248: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A248u;
    SET_GPR_U32(ctx, 31, 0x79A250u);
    ctx->pc = 0x79A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A248u;
    // 0x79a24c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A248u, 0x79A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79A250u;
    SET_GPR_U32(ctx, 31, 0x79A258u);
    ctx->pc = 0x79A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A250u;
    // 0x79a254: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A250u, 0x79A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A258u;
label_79a258:
    // 0x79a258: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A258u;
    {
        const bool branch_taken_0x79a258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A258u;
        // 0x79a25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a258) {
            ctx->pc = 0x79A240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a240;
        }
    }
    ctx->pc = 0x79A260u;
    // 0x79a260: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a264: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a268: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a26c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a26cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a270: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
    // 0x79a274: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79A274u;
    SET_GPR_U32(ctx, 31, 0x79A27Cu);
    ctx->pc = 0x79A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A274u;
    // 0x79a278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A274u, 0x79A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A27Cu;
label_79a27c:
    // 0x79a27c: 0x26846af0  addiu       $a0, $s4, 0x6AF0
    ctx->pc = 0x79a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27376));
    // 0x79a280: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x79A280u;
    SET_GPR_U32(ctx, 31, 0x79A288u);
    ctx->pc = 0x79A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A280u;
    // 0x79a284: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79A280u, 0x79A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A288u;
label_79a288:
    // 0x79a288: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a28c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a290: 0x26a46ab0  addiu       $a0, $s5, 0x6AB0
    ctx->pc = 0x79a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 27312));
    // 0x79a294: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A294u;
    SET_GPR_U32(ctx, 31, 0x79A29Cu);
    ctx->pc = 0x79A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A294u;
    // 0x79a298: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A294u, 0x79A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A29Cu;
label_79a29c:
    // 0x79a29c: 0x8202af28  lb          $v0, -0x50D8($s0)
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946600)));
    // 0x79a2a0: 0x26c84c58  addiu       $t0, $s6, 0x4C58
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19544));
    // 0x79a2a4: 0x2603af28  addiu       $v1, $s0, -0x50D8
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946600));
    // 0x79a2a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A2ACu;
    {
        const bool branch_taken_0x79a2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2ACu;
        // 0x79a2b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2ac) {
            ctx->pc = 0x79A2E8u;
            goto label_79a2e8;
        }
    }
    ctx->pc = 0x79A2B4u;
    // 0x79a2b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2b8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a2bc: 0x0  nop
    ctx->pc = 0x79a2bcu;
    // NOP
label_79a2c0:
    // 0x79a2c0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a2c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a2c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a2cc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a2d0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a2d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a2d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A2D4u;
    {
        const bool branch_taken_0x79a2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D4u;
        // 0x79a2d8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d4) {
            ctx->pc = 0x79A2E8u;
            goto label_79a2e8;
        }
    }
    ctx->pc = 0x79A2DCu;
    // 0x79a2dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a2e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A2E0u;
    {
        const bool branch_taken_0x79a2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a2e0) {
            ctx->pc = 0x79A2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2E0u;
            // 0x79a2e4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2c0;
        }
    }
    ctx->pc = 0x79A2E8u;
label_79a2e8:
    // 0x79a2e8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A2E8u;
    SET_GPR_U32(ctx, 31, 0x79A2F0u);
    ctx->pc = 0x79A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E8u;
    // 0x79a2ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A2E8u, 0x79A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F0u;
label_79a2f0:
    // 0x79a2f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2f4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A2F4u;
    {
        const bool branch_taken_0x79a2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F4u;
        // 0x79a2f8: 0x8e627a8c  lw          $v0, 0x7A8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2f4) {
            ctx->pc = 0x79A314u;
            goto label_79a314;
        }
    }
    ctx->pc = 0x79A2FCu;
    // 0x79a2fc: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x79a300: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a304: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a308: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a30c: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x79a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
    // 0x79a310: 0x8e627a8c  lw          $v0, 0x7A8C($s3)
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
label_79a314:
    // 0x79a314: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79a318: 0x8e252f84  lw          $a1, 0x2F84($s1)
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a31c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a320: 0xae627a8c  sw          $v0, 0x7A8C($s3)
    ctx->pc = 0x79a320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31372), GPR_U32(ctx, 2));
    // 0x79a324: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A324u;
    SET_GPR_U32(ctx, 31, 0x79A32Cu);
    ctx->pc = 0x79A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A324u;
    // 0x79a328: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A324u, 0x79A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A32Cu;
label_79a32c:
    // 0x79a32c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79a32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a330: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79a330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a334: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79a334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a338: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79a338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a33c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79a33cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a340: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79a340u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a344: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79a344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a34c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A354u;
    // 0x79a354: 0x0  nop
    ctx->pc = 0x79a354u;
    // NOP
    ctx->pc = 0x79a358u;
}
} // namespace gh_r204
