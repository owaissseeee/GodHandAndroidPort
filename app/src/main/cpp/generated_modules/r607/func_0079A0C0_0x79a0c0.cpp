#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079A0C0
// Address: 0x79a0c0 - 0x79a320
void func_0079A0C0_0x79a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A0C0_0x79a0c0");
#endif

    switch (ctx->pc) {
        case 0x79a110u: goto label_79a110;
        case 0x79a144u: goto label_79a144;
        case 0x79a168u: goto label_79a168;
        case 0x79a198u: goto label_79a198;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a204u: goto label_79a204;
        case 0x79a210u: goto label_79a210;
        case 0x79a220u: goto label_79a220;
        case 0x79a230u: goto label_79a230;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a248u: goto label_79a248;
        case 0x79a260u: goto label_79a260;
        case 0x79a274u: goto label_79a274;
        case 0x79a280u: goto label_79a280;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a298u: goto label_79a298;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2ecu: goto label_79a2ec;
        case 0x79a304u: goto label_79a304;
        default: break;
    }

    ctx->pc = 0x79a0c0u;

    // 0x79a0c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a0c4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a0c8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a0cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a0d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a0d4: 0x2448b648  addiu       $t0, $v0, -0x49B8
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948424));
    // 0x79a0d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a0dc: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a0e0: 0x8045b648  lb          $a1, -0x49B8($v0)
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79B648u));
    // 0x79a0e4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x79a0e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a0ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79a0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a0f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0fc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A0FCu;
    {
        const bool branch_taken_0x79a0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0FCu;
        // 0x79a100: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0fc) {
            ctx->pc = 0x79A138u;
            goto label_79a138;
        }
    }
    ctx->pc = 0x79A104u;
    // 0x79a104: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79a104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a108: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a10c: 0x0  nop
    ctx->pc = 0x79a10cu;
    // NOP
label_79a110:
    // 0x79a110: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79a114: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a118: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a11c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a120: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79a120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A124u;
    {
        const bool branch_taken_0x79a124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A124u;
        // 0x79a128: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a124) {
            ctx->pc = 0x79A138u;
            goto label_79a138;
        }
    }
    ctx->pc = 0x79A12Cu;
    // 0x79a12c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a130: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A130u;
    {
        const bool branch_taken_0x79a130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a130) {
            ctx->pc = 0x79A134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A130u;
            // 0x79a134: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a110;
        }
    }
    ctx->pc = 0x79A138u;
label_79a138:
    // 0x79a138: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x79a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a13c: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A13Cu;
    SET_GPR_U32(ctx, 31, 0x79A144u);
    ctx->pc = 0x79A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A13Cu;
    // 0x79a140: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A13Cu, 0x79A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A144u;
label_79a144:
    // 0x79a144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a148: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x79a14c: 0x8202b650  lb          $v0, -0x49B0($s0)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294948432)));
    // 0x79a150: 0x2603b650  addiu       $v1, $s0, -0x49B0
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948432));
    // 0x79a154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a158: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A158u;
    {
        const bool branch_taken_0x79a158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A158u;
        // 0x79a15c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a158) {
            ctx->pc = 0x79A190u;
            goto label_79a190;
        }
    }
    ctx->pc = 0x79A160u;
    // 0x79a160: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a164: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a168:
    // 0x79a168: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a16c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a170: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a174: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a178: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a17c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A17Cu;
    {
        const bool branch_taken_0x79a17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A17Cu;
        // 0x79a180: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a17c) {
            ctx->pc = 0x79A190u;
            goto label_79a190;
        }
    }
    ctx->pc = 0x79A184u;
    // 0x79a184: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a188: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A188u;
    {
        const bool branch_taken_0x79a188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a188) {
            ctx->pc = 0x79A18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A188u;
            // 0x79a18c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a168;
        }
    }
    ctx->pc = 0x79A190u;
label_79a190:
    // 0x79a190: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A190u;
    SET_GPR_U32(ctx, 31, 0x79A198u);
    ctx->pc = 0x79A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A190u;
    // 0x79a194: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A190u, 0x79A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A198u;
label_79a198:
    // 0x79a198: 0x1220005a  beqz        $s1, . + 4 + (0x5A << 2)
    ctx->pc = 0x79A198u;
    {
        const bool branch_taken_0x79a198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A198u;
        // 0x79a19c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a198) {
            ctx->pc = 0x79A304u;
            goto label_79a304;
        }
    }
    ctx->pc = 0x79A1A0u;
    // 0x79a1a0: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
    ctx->pc = 0x79A1A0u;
    {
        const bool branch_taken_0x79a1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1A0u;
        // 0x79a1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1a0) {
            ctx->pc = 0x79A304u;
            goto label_79a304;
        }
    }
    ctx->pc = 0x79A1A8u;
    // 0x79a1a8: 0x1242002f  beq         $s2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x79A1A8u;
    {
        const bool branch_taken_0x79a1a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1A8u;
        // 0x79a1ac: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1a8) {
            ctx->pc = 0x79A268u;
            goto label_79a268;
        }
    }
    ctx->pc = 0x79A1B0u;
    // 0x79a1b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A1B0u;
    {
        const bool branch_taken_0x79a1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a1b0) {
            ctx->pc = 0x79A1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1B0u;
            // 0x79a1b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1C8u;
            goto label_79a1c8;
        }
    }
    ctx->pc = 0x79A1B8u;
    // 0x79a1b8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A1B8u;
    {
        const bool branch_taken_0x79a1b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B8u;
        // 0x79a1bc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1b8) {
            ctx->pc = 0x79A1D8u;
            goto label_79a1d8;
        }
    }
    ctx->pc = 0x79A1C0u;
    // 0x79a1c0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x79A1C0u;
    {
        const bool branch_taken_0x79a1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C0u;
        // 0x79a1c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1c0) {
            ctx->pc = 0x79A308u;
            goto label_79a308;
        }
    }
    ctx->pc = 0x79A1C8u;
label_79a1c8:
    // 0x79a1c8: 0x1242003b  beq         $s2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x79A1C8u;
    {
        const bool branch_taken_0x79a1c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C8u;
        // 0x79a1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1c8) {
            ctx->pc = 0x79A2B8u;
            goto label_79a2b8;
        }
    }
    ctx->pc = 0x79A1D0u;
    // 0x79a1d0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x79A1D0u;
    {
        const bool branch_taken_0x79a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D0u;
        // 0x79a1d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1d0) {
            ctx->pc = 0x79A308u;
            goto label_79a308;
        }
    }
    ctx->pc = 0x79A1D8u;
label_79a1d8:
    // 0x79a1d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a1dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a1e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a1e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a1e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1e8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a1ec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a1f0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A1F0u;
    SET_GPR_U32(ctx, 31, 0x79A1F8u);
    ctx->pc = 0x79A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F0u;
    // 0x79a1f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A1F0u, 0x79A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F8u;
label_79a1f8:
    // 0x79a1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1fc: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A1FCu;
    SET_GPR_U32(ctx, 31, 0x79A204u);
    ctx->pc = 0x79A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1FCu;
    // 0x79a200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A1FCu, 0x79A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A204u;
label_79a204:
    // 0x79a204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a208: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A208u;
    SET_GPR_U32(ctx, 31, 0x79A210u);
    ctx->pc = 0x79A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A208u;
    // 0x79a20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A208u, 0x79A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A210u;
label_79a210:
    // 0x79a210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a218: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A218u;
    SET_GPR_U32(ctx, 31, 0x79A220u);
    ctx->pc = 0x79A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A218u;
    // 0x79a21c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A218u, 0x79A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A220u;
label_79a220:
    // 0x79a220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a228: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A228u;
    SET_GPR_U32(ctx, 31, 0x79A230u);
    ctx->pc = 0x79A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A228u;
    // 0x79a22c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A228u, 0x79A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A230u;
label_79a230:
    // 0x79a230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a234: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A234u;
    SET_GPR_U32(ctx, 31, 0x79A23Cu);
    ctx->pc = 0x79A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A234u;
    // 0x79a238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A234u, 0x79A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A23Cu;
label_79a23c:
    // 0x79a23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a240: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A240u;
    SET_GPR_U32(ctx, 31, 0x79A248u);
    ctx->pc = 0x79A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A240u;
    // 0x79a244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A240u, 0x79A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A248u;
label_79a248:
    // 0x79a248: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a24c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a250: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a254: 0x24a5b658  addiu       $a1, $a1, -0x49A8
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
    // 0x79a258: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A258u;
    SET_GPR_U32(ctx, 31, 0x79A260u);
    ctx->pc = 0x79A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A258u;
    // 0x79a25c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A258u, 0x79A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A260u;
label_79a260:
    // 0x79a260: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x79A260u;
    {
        const bool branch_taken_0x79a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A260u;
        // 0x79a264: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a260) {
            ctx->pc = 0x79A308u;
            goto label_79a308;
        }
    }
    ctx->pc = 0x79A268u;
label_79a268:
    // 0x79a268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a26c: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A26Cu;
    SET_GPR_U32(ctx, 31, 0x79A274u);
    ctx->pc = 0x79A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A26Cu;
    // 0x79a270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A26Cu, 0x79A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A274u;
label_79a274:
    // 0x79a274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a278: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A278u;
    SET_GPR_U32(ctx, 31, 0x79A280u);
    ctx->pc = 0x79A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A278u;
    // 0x79a27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A278u, 0x79A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A280u;
label_79a280:
    // 0x79a280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a284: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A284u;
    SET_GPR_U32(ctx, 31, 0x79A28Cu);
    ctx->pc = 0x79A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A284u;
    // 0x79a288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A284u, 0x79A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A28Cu;
label_79a28c:
    // 0x79a28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a290: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A290u;
    SET_GPR_U32(ctx, 31, 0x79A298u);
    ctx->pc = 0x79A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A290u;
    // 0x79a294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A290u, 0x79A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A298u;
label_79a298:
    // 0x79a298: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a29c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a2a0: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a2a4: 0x24a5b658  addiu       $a1, $a1, -0x49A8
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
    // 0x79a2a8: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A2A8u;
    SET_GPR_U32(ctx, 31, 0x79A2B0u);
    ctx->pc = 0x79A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A8u;
    // 0x79a2ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A2A8u, 0x79A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B0u;
label_79a2b0:
    // 0x79a2b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79A2B0u;
    {
        const bool branch_taken_0x79a2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B0u;
        // 0x79a2b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2b0) {
            ctx->pc = 0x79A308u;
            goto label_79a308;
        }
    }
    ctx->pc = 0x79A2B8u;
label_79a2b8:
    // 0x79a2b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2bc: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A2BCu;
    SET_GPR_U32(ctx, 31, 0x79A2C4u);
    ctx->pc = 0x79A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2BCu;
    // 0x79a2c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A2BCu, 0x79A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2cc: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A2CCu;
    SET_GPR_U32(ctx, 31, 0x79A2D4u);
    ctx->pc = 0x79A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2CCu;
    // 0x79a2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A2CCu, 0x79A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D4u;
label_79a2d4:
    // 0x79a2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A2D8u;
    SET_GPR_U32(ctx, 31, 0x79A2E0u);
    ctx->pc = 0x79A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D8u;
    // 0x79a2dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A2D8u, 0x79A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E0u;
label_79a2e0:
    // 0x79a2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2e4: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A2E4u;
    SET_GPR_U32(ctx, 31, 0x79A2ECu);
    ctx->pc = 0x79A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E4u;
    // 0x79a2e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A2E4u, 0x79A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2ECu;
label_79a2ec:
    // 0x79a2ec: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a2f0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a2f4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a2f8: 0x24a5b658  addiu       $a1, $a1, -0x49A8
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
    // 0x79a2fc: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A2FCu;
    SET_GPR_U32(ctx, 31, 0x79A304u);
    ctx->pc = 0x79A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2FCu;
    // 0x79a300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A2FCu, 0x79A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A304u;
label_79a304:
    // 0x79a304: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a308:
    // 0x79a308: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a30c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a310: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a318: 0x3e00008  jr          $ra
    ctx->pc = 0x79A318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A318u;
        // 0x79a31c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A320u;
}
} // namespace gh_r607
