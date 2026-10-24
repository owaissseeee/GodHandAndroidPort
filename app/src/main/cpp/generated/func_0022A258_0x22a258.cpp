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

// Function: func_0022A258
// Address: 0x22a258 - 0x22a3f8
void func_0022A258_0x22a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022A258_0x22a258");
#endif

    switch (ctx->pc) {
        case 0x22a298u: goto label_22a298;
        case 0x22a2c4u: goto label_22a2c4;
        case 0x22a2e4u: goto label_22a2e4;
        case 0x22a304u: goto label_22a304;
        case 0x22a31cu: goto label_22a31c;
        case 0x22a32cu: goto label_22a32c;
        case 0x22a340u: goto label_22a340;
        case 0x22a34cu: goto label_22a34c;
        case 0x22a374u: goto label_22a374;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3d8u: goto label_22a3d8;
        default: break;
    }

    ctx->pc = 0x22a258u;

    // 0x22a258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a25c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a260: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22a264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a26c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x22a26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22a270: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x22a270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x22a274: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x22a274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22a278: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A278u;
    {
        const bool branch_taken_0x22a278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A278u;
        // 0x22a27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a278) {
            ctx->pc = 0x22A290u;
            goto label_22a290;
        }
    }
    ctx->pc = 0x22A280u;
    // 0x22a280: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22A280u;
    {
        const bool branch_taken_0x22a280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a280) {
            ctx->pc = 0x22A2DCu;
            goto label_22a2dc;
        }
    }
    ctx->pc = 0x22A288u;
    // 0x22a288: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x22A288u;
    {
        const bool branch_taken_0x22a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A288u;
        // 0x22a28c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a288) {
            ctx->pc = 0x22A3E8u;
            goto label_22a3e8;
        }
    }
    ctx->pc = 0x22A290u;
label_22a290:
    // 0x22a290: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A290u;
    SET_GPR_U32(ctx, 31, 0x22A298u);
    ctx->pc = 0x22A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A290u;
    // 0x22a294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A290u, 0x22A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A298u;
label_22a298:
    // 0x22a298: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22a29c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22a29cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a2a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2a8: 0x8c653914  lw          $a1, 0x3914($v1)
    ctx->pc = 0x22a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14612)));
    // 0x22a2ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22a2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a2b0: 0x8c663918  lw          $a2, 0x3918($v1)
    ctx->pc = 0x22a2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14616)));
    // 0x22a2b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a2b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22a2bc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A2BCu;
    SET_GPR_U32(ctx, 31, 0x22A2C4u);
    ctx->pc = 0x22A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2BCu;
    // 0x22a2c0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A2BCu, 0x22A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2C4u;
label_22a2c4:
    // 0x22a2c4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22a2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22a2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a2cc: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x22a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x22a2d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a2d4: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x22a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x22a2d8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22a2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a2dc:
    // 0x22a2dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22A2DCu;
    SET_GPR_U32(ctx, 31, 0x22A2E4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22A2DCu, 0x22A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2E4u;
label_22a2e4:
    // 0x22a2e4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2ec: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22a2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22a2f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22a2f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22a2f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22a2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a2f8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22a2fc: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22A2FCu;
    SET_GPR_U32(ctx, 31, 0x22A304u);
    ctx->pc = 0x22A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2FCu;
    // 0x22a300: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22A2FCu, 0x22A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A304u;
label_22a304:
    // 0x22a304: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22a308: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x22a308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x22a30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a314: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22A314u;
    SET_GPR_U32(ctx, 31, 0x22A31Cu);
    ctx->pc = 0x22A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A314u;
    // 0x22a318: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22A314u, 0x22A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A31Cu;
label_22a31c:
    // 0x22a31c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A31Cu;
    {
        const bool branch_taken_0x22a31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a31c) {
            ctx->pc = 0x22A32Cu;
            goto label_22a32c;
        }
    }
    ctx->pc = 0x22A324u;
    // 0x22a324: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22A324u;
    SET_GPR_U32(ctx, 31, 0x22A32Cu);
    ctx->pc = 0x22A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A324u;
    // 0x22a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22A324u, 0x22A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A32Cu;
label_22a32c:
    // 0x22a32c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a330: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a338: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22A338u;
    SET_GPR_U32(ctx, 31, 0x22A340u);
    ctx->pc = 0x22A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A338u;
    // 0x22a33c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22A338u, 0x22A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A340u;
label_22a340:
    // 0x22a340: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a344: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22A344u;
    SET_GPR_U32(ctx, 31, 0x22A34Cu);
    ctx->pc = 0x22A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A344u;
    // 0x22a348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22A344u, 0x22A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A34Cu;
label_22a34c:
    // 0x22a34c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22a34cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22a350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22a350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22a354: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22A354u;
    {
        const bool branch_taken_0x22a354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A354u;
        // 0x22a358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a354) {
            ctx->pc = 0x22A394u;
            goto label_22a394;
        }
    }
    ctx->pc = 0x22A35Cu;
    // 0x22a35c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x22a360: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22A360u;
    {
        const bool branch_taken_0x22a360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A360u;
        // 0x22a364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a360) {
            ctx->pc = 0x22A398u;
            goto label_22a398;
        }
    }
    ctx->pc = 0x22A368u;
    // 0x22a368: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x22a368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x22a36c: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x22A36Cu;
    SET_GPR_U32(ctx, 31, 0x22A374u);
    ctx->pc = 0x22A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A36Cu;
    // 0x22a370: 0x2405037e  addiu       $a1, $zero, 0x37E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 894));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x22A36Cu, 0x22A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A374u;
label_22a374:
    // 0x22a374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A374u;
    {
        const bool branch_taken_0x22a374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A374u;
        // 0x22a378: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a374) {
            ctx->pc = 0x22A398u;
            goto label_22a398;
        }
    }
    ctx->pc = 0x22A37Cu;
    // 0x22a37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a380: 0x2406037e  addiu       $a2, $zero, 0x37E
    ctx->pc = 0x22a380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 894));
    // 0x22a384: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x22A384u;
    SET_GPR_U32(ctx, 31, 0x22A38Cu);
    ctx->pc = 0x22A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A384u;
    // 0x22a388: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x22A384u, 0x22A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A38Cu;
label_22a38c:
    // 0x22a38c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22A38Cu;
    {
        const bool branch_taken_0x22a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A38Cu;
        // 0x22a390: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a38c) {
            ctx->pc = 0x22A39Cu;
            goto label_22a39c;
        }
    }
    ctx->pc = 0x22A394u;
label_22a394:
    // 0x22a394: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x22a394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_22a398:
    // 0x22a398: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22a398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_22a39c:
    // 0x22a39c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22a3a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22A3A0u;
    {
        const bool branch_taken_0x22a3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3A0u;
        // 0x22a3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3a0) {
            ctx->pc = 0x22A3E0u;
            goto label_22a3e0;
        }
    }
    ctx->pc = 0x22A3A8u;
    // 0x22a3a8: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x22a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x22a3ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22A3ACu;
    {
        const bool branch_taken_0x22a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3ACu;
        // 0x22a3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3ac) {
            ctx->pc = 0x22A3E4u;
            goto label_22a3e4;
        }
    }
    ctx->pc = 0x22A3B4u;
    // 0x22a3b4: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x22a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x22a3b8: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x22A3B8u;
    SET_GPR_U32(ctx, 31, 0x22A3C0u);
    ctx->pc = 0x22A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3B8u;
    // 0x22a3bc: 0x2405037e  addiu       $a1, $zero, 0x37E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 894));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x22A3B8u, 0x22A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3C0u;
label_22a3c0:
    // 0x22a3c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A3C0u;
    {
        const bool branch_taken_0x22a3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3C0u;
        // 0x22a3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3c0) {
            ctx->pc = 0x22A3E4u;
            goto label_22a3e4;
        }
    }
    ctx->pc = 0x22A3C8u;
    // 0x22a3c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22a3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3cc: 0x2406037e  addiu       $a2, $zero, 0x37E
    ctx->pc = 0x22a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 894));
    // 0x22a3d0: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x22A3D0u;
    SET_GPR_U32(ctx, 31, 0x22A3D8u);
    ctx->pc = 0x22A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3D0u;
    // 0x22a3d4: 0x24070012  addiu       $a3, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x22A3D0u, 0x22A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3D8u;
label_22a3d8:
    // 0x22a3d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22A3D8u;
    {
        const bool branch_taken_0x22a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D8u;
        // 0x22a3dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3d8) {
            ctx->pc = 0x22A3E8u;
            goto label_22a3e8;
        }
    }
    ctx->pc = 0x22A3E0u;
label_22a3e0:
    // 0x22a3e0: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x22a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
label_22a3e4:
    // 0x22a3e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22a3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a3e8:
    // 0x22a3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a3ec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x22a3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22A3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3F0u;
        // 0x22a3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A3F8u;
}
