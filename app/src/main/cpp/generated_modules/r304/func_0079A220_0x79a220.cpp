#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_0079A220
// Address: 0x79a220 - 0x79a400
void func_0079A220_0x79a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A220_0x79a220");
#endif

    switch (ctx->pc) {
        case 0x79a278u: goto label_79a278;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2d0u: goto label_79a2d0;
        case 0x79a300u: goto label_79a300;
        case 0x79a320u: goto label_79a320;
        case 0x79a334u: goto label_79a334;
        case 0x79a340u: goto label_79a340;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a368u: goto label_79a368;
        case 0x79a394u: goto label_79a394;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a3c8u: goto label_79a3c8;
        case 0x79a3d4u: goto label_79a3d4;
        case 0x79a3e0u: goto label_79a3e0;
        default: break;
    }

    ctx->pc = 0x79a220u;

    // 0x79a220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a224: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a228: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79a22c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a230: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a234: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79a234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a238: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a23c: 0x2448abd0  addiu       $t0, $v0, -0x5430
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945744));
    // 0x79a240: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79a244: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a248: 0x8046abd0  lb          $a2, -0x5430($v0)
    ctx->pc = 0x79a248u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79ABD0u));
    // 0x79a24c: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a250: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a254: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a264: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x79A264u;
    {
        const bool branch_taken_0x79a264 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A264u;
        // 0x79a268: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a264) {
            ctx->pc = 0x79A2A0u;
            goto label_79a2a0;
        }
    }
    ctx->pc = 0x79A26Cu;
    // 0x79a26c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x79a26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a270: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a274: 0x0  nop
    ctx->pc = 0x79a274u;
    // NOP
label_79a278:
    // 0x79a278: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a27c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a280: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a284: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a288: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a288u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a28c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A28Cu;
    {
        const bool branch_taken_0x79a28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A28Cu;
        // 0x79a290: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a28c) {
            ctx->pc = 0x79A2A0u;
            goto label_79a2a0;
        }
    }
    ctx->pc = 0x79A294u;
    // 0x79a294: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a298: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A298u;
    {
        const bool branch_taken_0x79a298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a298) {
            ctx->pc = 0x79A29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A298u;
            // 0x79a29c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a278;
        }
    }
    ctx->pc = 0x79A2A0u;
label_79a2a0:
    // 0x79a2a0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A2A0u;
    SET_GPR_U32(ctx, 31, 0x79A2A8u);
    ctx->pc = 0x79A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A0u;
    // 0x79a2a4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A2A0u, 0x79A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2A8u;
label_79a2a8:
    // 0x79a2a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2ac: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x79a2b0: 0x8202abd8  lb          $v0, -0x5428($s0)
    ctx->pc = 0x79a2b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945752)));
    // 0x79a2b4: 0x2603abd8  addiu       $v1, $s0, -0x5428
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945752));
    // 0x79a2b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A2BCu;
    {
        const bool branch_taken_0x79a2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2bc) {
            ctx->pc = 0x79A2F8u;
            goto label_79a2f8;
        }
    }
    ctx->pc = 0x79A2C4u;
    // 0x79a2c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2c8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a2cc: 0x0  nop
    ctx->pc = 0x79a2ccu;
    // NOP
label_79a2d0:
    // 0x79a2d0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a2d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a2d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a2dc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a2e0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a2e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A2E4u;
    {
        const bool branch_taken_0x79a2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2e4) {
            ctx->pc = 0x79A2F8u;
            goto label_79a2f8;
        }
    }
    ctx->pc = 0x79A2ECu;
    // 0x79a2ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a2f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A2F0u;
    {
        const bool branch_taken_0x79a2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a2f0) {
            ctx->pc = 0x79A2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2F0u;
            // 0x79a2f4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2d0;
        }
    }
    ctx->pc = 0x79A2F8u;
label_79a2f8:
    // 0x79a2f8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A2F8u;
    SET_GPR_U32(ctx, 31, 0x79A300u);
    ctx->pc = 0x79A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F8u;
    // 0x79a2fc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A2F8u, 0x79A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A300u;
label_79a300:
    // 0x79a300: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x79A300u;
    {
        const bool branch_taken_0x79a300 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A300u;
        // 0x79a304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a300) {
            ctx->pc = 0x79A3E0u;
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A308u;
    // 0x79a308: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x79A308u;
    {
        const bool branch_taken_0x79a308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A308u;
        // 0x79a30c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a308) {
            ctx->pc = 0x79A3E4u;
            goto label_79a3e4;
        }
    }
    ctx->pc = 0x79A310u;
    // 0x79a310: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x79A310u;
    {
        const bool branch_taken_0x79a310 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A310u;
        // 0x79a314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a310) {
            ctx->pc = 0x79A39Cu;
            goto label_79a39c;
        }
    }
    ctx->pc = 0x79A318u;
    // 0x79a318: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A318u;
    SET_GPR_U32(ctx, 31, 0x79A320u);
    ctx->pc = 0x79A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A318u;
    // 0x79a31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A318u, 0x79A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A320u;
label_79a320:
    // 0x79a320: 0x2e700001  sltiu       $s0, $s3, 0x1
    ctx->pc = 0x79a320u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79a324: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a32c: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A32Cu;
    SET_GPR_U32(ctx, 31, 0x79A334u);
    ctx->pc = 0x79A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A32Cu;
    // 0x79a330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A32Cu, 0x79A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A334u;
label_79a334:
    // 0x79a334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a338: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A338u;
    SET_GPR_U32(ctx, 31, 0x79A340u);
    ctx->pc = 0x79A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A338u;
    // 0x79a33c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A338u, 0x79A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A340u;
label_79a340:
    // 0x79a340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a344: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A344u;
    SET_GPR_U32(ctx, 31, 0x79A34Cu);
    ctx->pc = 0x79A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A344u;
    // 0x79a348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A344u, 0x79A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A34Cu;
label_79a34c:
    // 0x79a34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a354: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A354u;
    SET_GPR_U32(ctx, 31, 0x79A35Cu);
    ctx->pc = 0x79A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A354u;
    // 0x79a358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A354u, 0x79A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A35Cu;
label_79a35c:
    // 0x79a35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a360: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A360u;
    SET_GPR_U32(ctx, 31, 0x79A368u);
    ctx->pc = 0x79A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A360u;
    // 0x79a364: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A360u, 0x79A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A368u;
label_79a368:
    // 0x79a368: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A368u;
    {
        const bool branch_taken_0x79a368 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A368u;
        // 0x79a36c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a368) {
            ctx->pc = 0x79A3E0u;
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A370u;
    // 0x79a370: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x79a370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a374: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a378: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a37c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a384: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a388: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a38c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79A38Cu;
    SET_GPR_U32(ctx, 31, 0x79A394u);
    ctx->pc = 0x79A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A38Cu;
    // 0x79a390: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79A38Cu, 0x79A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A394u;
label_79a394:
    // 0x79a394: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79A394u;
    {
        const bool branch_taken_0x79a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a394) {
            ctx->pc = 0x79A3E4u;
            goto label_79a3e4;
        }
    }
    ctx->pc = 0x79A39Cu;
label_79a39c:
    // 0x79a39c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A39Cu;
    SET_GPR_U32(ctx, 31, 0x79A3A4u);
    ctx->pc = 0x79A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A39Cu;
    // 0x79a3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A39Cu, 0x79A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A4u;
label_79a3a4:
    // 0x79a3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3a8: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A3A8u;
    SET_GPR_U32(ctx, 31, 0x79A3B0u);
    ctx->pc = 0x79A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A8u;
    // 0x79a3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A3A8u, 0x79A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B0u;
label_79a3b0:
    // 0x79a3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3b4: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A3B4u;
    SET_GPR_U32(ctx, 31, 0x79A3BCu);
    ctx->pc = 0x79A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B4u;
    // 0x79a3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A3B4u, 0x79A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3BCu;
label_79a3bc:
    // 0x79a3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3c0: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A3C0u;
    SET_GPR_U32(ctx, 31, 0x79A3C8u);
    ctx->pc = 0x79A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C0u;
    // 0x79a3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A3C0u, 0x79A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C8u;
label_79a3c8:
    // 0x79a3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3cc: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A3CCu;
    SET_GPR_U32(ctx, 31, 0x79A3D4u);
    ctx->pc = 0x79A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3CCu;
    // 0x79a3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A3CCu, 0x79A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D4u;
label_79a3d4:
    // 0x79a3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3d8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A3D8u;
    SET_GPR_U32(ctx, 31, 0x79A3E0u);
    ctx->pc = 0x79A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D8u;
    // 0x79a3dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A3D8u, 0x79A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3E0u;
label_79a3e0:
    // 0x79a3e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a3e4:
    // 0x79a3e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a3e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a3ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a3f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a3f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F8u;
        // 0x79a3fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A400u;
}
} // namespace gh_r304
