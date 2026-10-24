#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A1D0
// Address: 0x79a1d0 - 0x79a490
void func_0079A1D0_0x79a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A1D0_0x79a1d0");
#endif

    switch (ctx->pc) {
        case 0x79a220u: goto label_79a220;
        case 0x79a250u: goto label_79a250;
        case 0x79a278u: goto label_79a278;
        case 0x79a288u: goto label_79a288;
        case 0x79a388u: goto label_79a388;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a458u: goto label_79a458;
        case 0x79a464u: goto label_79a464;
        default: break;
    }

    ctx->pc = 0x79a1d0u;

    // 0x79a1d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79a1d4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a1d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a1dc: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a1e0: 0x8044ac20  lb          $a0, -0x53E0($v0)
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AC20u));
    // 0x79a1e4: 0x2446ac20  addiu       $a2, $v0, -0x53E0
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x79a1e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a1ec: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a1f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a1fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a200: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a204: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x79a208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a20c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x79a20cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79a210: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x79a210u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x79a214: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A214u;
    {
        const bool branch_taken_0x79a214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a214) {
            ctx->pc = 0x79A248u;
            goto label_79a248;
        }
    }
    ctx->pc = 0x79A21Cu;
    // 0x79a21c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a220:
    // 0x79a220: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a224: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a228: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a22c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a230: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a234: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A234u;
    {
        const bool branch_taken_0x79a234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A234u;
        // 0x79a238: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a234) {
            ctx->pc = 0x79A248u;
            goto label_79a248;
        }
    }
    ctx->pc = 0x79A23Cu;
    // 0x79a23c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a240: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A240u;
    {
        const bool branch_taken_0x79a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a240) {
            ctx->pc = 0x79A244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A240u;
            // 0x79a244: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a220;
        }
    }
    ctx->pc = 0x79A248u;
label_79a248:
    // 0x79a248: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A248u;
    SET_GPR_U32(ctx, 31, 0x79A250u);
    ctx->pc = 0x79A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A248u;
    // 0x79a24c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A248u, 0x79A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a258: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a25c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a260: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a264: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a268: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a26c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a26cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a270: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A270u;
    SET_GPR_U32(ctx, 31, 0x79A278u);
    ctx->pc = 0x79A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A270u;
    // 0x79a274: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A270u, 0x79A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A278u;
label_79a278:
    // 0x79a278: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x79A278u;
    {
        const bool branch_taken_0x79a278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A278u;
        // 0x79a27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a278) {
            ctx->pc = 0x79A458u;
            goto label_79a458;
        }
    }
    ctx->pc = 0x79A280u;
    // 0x79a280: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x79A280u;
    SET_GPR_U32(ctx, 31, 0x79A288u);
    ctx->pc = 0x79A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A280u;
    // 0x79a284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x79A280u, 0x79A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A288u;
label_79a288:
    // 0x79a288: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x79a288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a28c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A28Cu;
    {
        const bool branch_taken_0x79a28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A28Cu;
        // 0x79a290: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a28c) {
            ctx->pc = 0x79A2A0u;
            goto label_79a2a0;
        }
    }
    ctx->pc = 0x79A294u;
    // 0x79a294: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a298: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A298u;
    {
        const bool branch_taken_0x79a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A298u;
        // 0x79a29c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a298) {
            ctx->pc = 0x79A2A4u;
            goto label_79a2a4;
        }
    }
    ctx->pc = 0x79A2A0u;
label_79a2a0:
    // 0x79a2a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2a4:
    // 0x79a2a4: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x79A2A4u;
    {
        const bool branch_taken_0x79a2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A4u;
        // 0x79a2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a4) {
            ctx->pc = 0x79A444u;
            goto label_79a444;
        }
    }
    ctx->pc = 0x79A2ACu;
    // 0x79a2ac: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a2acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a2b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a2b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A2B4u;
    {
        const bool branch_taken_0x79a2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B4u;
        // 0x79a2b8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2b4) {
            ctx->pc = 0x79A2C8u;
            goto label_79a2c8;
        }
    }
    ctx->pc = 0x79A2BCu;
    // 0x79a2bc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a2c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A2C0u;
    {
        const bool branch_taken_0x79a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C0u;
        // 0x79a2c4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2c0) {
            ctx->pc = 0x79A2CCu;
            goto label_79a2cc;
        }
    }
    ctx->pc = 0x79A2C8u;
label_79a2c8:
    // 0x79a2c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2cc:
    // 0x79a2cc: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x79A2CCu;
    {
        const bool branch_taken_0x79a2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2cc) {
            ctx->pc = 0x79A2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2CCu;
            // 0x79a2d0: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A448u;
            goto label_79a448;
        }
    }
    ctx->pc = 0x79A2D4u;
    // 0x79a2d4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x79a2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a2d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A2D8u;
    {
        const bool branch_taken_0x79a2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D8u;
        // 0x79a2dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d8) {
            ctx->pc = 0x79A2ECu;
            goto label_79a2ec;
        }
    }
    ctx->pc = 0x79A2E0u;
    // 0x79a2e0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a2e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A2E4u;
    {
        const bool branch_taken_0x79a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2e4) {
            ctx->pc = 0x79A2F0u;
            goto label_79a2f0;
        }
    }
    ctx->pc = 0x79A2ECu;
label_79a2ec:
    // 0x79a2ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a2ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2f0:
    // 0x79a2f0: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x79a2f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2f8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x79a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x79a2fc: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x79a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x79a300: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a304: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x79a304u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a308: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A308u;
    {
        const bool branch_taken_0x79a308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A308u;
        // 0x79a30c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a308) {
            ctx->pc = 0x79A31Cu;
            goto label_79a31c;
        }
    }
    ctx->pc = 0x79A310u;
    // 0x79a310: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A314u;
    {
        const bool branch_taken_0x79a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A314u;
        // 0x79a318: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a314) {
            ctx->pc = 0x79A320u;
            goto label_79a320;
        }
    }
    ctx->pc = 0x79A31Cu;
label_79a31c:
    // 0x79a31c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a320:
    // 0x79a320: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x79a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x79a324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a328: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x79a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x79a32c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x79a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x79a330: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x79a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x79a334: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x79a334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a338: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x79a338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x79a33c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x79a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x79a340: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x79a340u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a344: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A344u;
    {
        const bool branch_taken_0x79a344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A344u;
        // 0x79a348: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a344) {
            ctx->pc = 0x79A358u;
            goto label_79a358;
        }
    }
    ctx->pc = 0x79A34Cu;
    // 0x79a34c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A350u;
    {
        const bool branch_taken_0x79a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A350u;
        // 0x79a354: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a350) {
            ctx->pc = 0x79A35Cu;
            goto label_79a35c;
        }
    }
    ctx->pc = 0x79A358u;
label_79a358:
    // 0x79a358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a35c:
    // 0x79a35c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a360: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x79a360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a364: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79a368: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a36c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a370: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a374: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x79a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a378: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a37c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79a380: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a384: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_79a388:
    // 0x79a388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a38c: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x79A38Cu;
    {
        const bool branch_taken_0x79a38c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A38Cu;
        // 0x79a390: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a38c) {
            ctx->pc = 0x79A398u;
            goto label_79a398;
        }
    }
    ctx->pc = 0x79A394u;
    // 0x79a394: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x79a394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_79a398:
    // 0x79a398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79a39c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A39Cu;
    {
        const bool branch_taken_0x79a39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a39c) {
            ctx->pc = 0x79A3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A39Cu;
            // 0x79a3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3B0u;
            goto label_79a3b0;
        }
    }
    ctx->pc = 0x79A3A4u;
    // 0x79a3a4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a3a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x79a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x79a3ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a3b0:
    // 0x79a3b0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a3b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a3b8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x79a3b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x79a3bc: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x79a3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3c0: 0x0  nop
    ctx->pc = 0x79a3c0u;
    // NOP
    // 0x79a3c4: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
    ctx->pc = 0x79A3C4u;
    {
        const bool branch_taken_0x79a3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a3c4) {
            ctx->pc = 0x79A3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3C4u;
            // 0x79a3c8: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A448u;
            goto label_79a448;
        }
    }
    ctx->pc = 0x79A3CCu;
    // 0x79a3cc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x79a3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a3d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A3D0u;
    {
        const bool branch_taken_0x79a3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D0u;
        // 0x79a3d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3d0) {
            ctx->pc = 0x79A3E4u;
            goto label_79a3e4;
        }
    }
    ctx->pc = 0x79A3D8u;
    // 0x79a3d8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a3dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A3DCu;
    {
        const bool branch_taken_0x79a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3DCu;
        // 0x79a3e0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3dc) {
            ctx->pc = 0x79A3E8u;
            goto label_79a3e8;
        }
    }
    ctx->pc = 0x79A3E4u;
label_79a3e4:
    // 0x79a3e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a3e8:
    // 0x79a3e8: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x79a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a3f4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x79a3f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x79a3f8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x79a3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x79a3fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x79a3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a400: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x79a400u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a404: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A404u;
    {
        const bool branch_taken_0x79a404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A404u;
        // 0x79a408: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a404) {
            ctx->pc = 0x79A418u;
            goto label_79a418;
        }
    }
    ctx->pc = 0x79A40Cu;
    // 0x79a40c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A410u;
    {
        const bool branch_taken_0x79a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a410) {
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A418u;
label_79a418:
    // 0x79a418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a41c:
    // 0x79a41c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a424: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a428: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x79a428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x79a42c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a430: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79a434: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A434u;
    SET_GPR_U32(ctx, 31, 0x79A43Cu);
    ctx->pc = 0x79A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A434u;
    // 0x79a438: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A434u, 0x79A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A43Cu;
label_79a43c:
    // 0x79a43c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x79A43Cu;
    {
        const bool branch_taken_0x79a43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A43Cu;
        // 0x79a440: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a43c) {
            ctx->pc = 0x79A388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a388;
        }
    }
    ctx->pc = 0x79A444u;
label_79a444:
    // 0x79a444: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x79a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_79a448:
    // 0x79a448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a44c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x79a44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x79a450: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x79A450u;
    SET_GPR_U32(ctx, 31, 0x79A458u);
    ctx->pc = 0x79A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A450u;
    // 0x79a454: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x79A450u, 0x79A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A458u;
label_79a458:
    // 0x79a458: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79a45c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A45Cu;
    SET_GPR_U32(ctx, 31, 0x79A464u);
    ctx->pc = 0x79A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A45Cu;
    // 0x79a460: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A45Cu, 0x79A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A464u;
label_79a464:
    // 0x79a464: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a468: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a46c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a470: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a474: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79a474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a47c: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x79a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79a480: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x79a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a484: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x79a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a488: 0x3e00008  jr          $ra
    ctx->pc = 0x79A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A488u;
        // 0x79a48c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A490u;
}
} // namespace gh_r206
