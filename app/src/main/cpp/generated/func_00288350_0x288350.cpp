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

// Function: func_00288350
// Address: 0x288350 - 0x2884e0
void func_00288350_0x288350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288350_0x288350");
#endif

    switch (ctx->pc) {
        case 0x2883d0u: goto label_2883d0;
        case 0x2883e4u: goto label_2883e4;
        case 0x2883ecu: goto label_2883ec;
        case 0x2883f4u: goto label_2883f4;
        case 0x288434u: goto label_288434;
        case 0x288478u: goto label_288478;
        case 0x2884a4u: goto label_2884a4;
        case 0x2884c4u: goto label_2884c4;
        case 0x2884ccu: goto label_2884cc;
        default: break;
    }

    ctx->pc = 0x288350u;

    // 0x288350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288358: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28835c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x288360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288364: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x288364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288368: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x288368u;
    {
        const bool branch_taken_0x288368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288368u;
        // 0x28836c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288368) {
            ctx->pc = 0x2883DCu;
            goto label_2883dc;
        }
    }
    ctx->pc = 0x288370u;
    // 0x288370: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x288370u;
    {
        const bool branch_taken_0x288370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288370) {
            ctx->pc = 0x288374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288370u;
            // 0x288374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288388u;
            goto label_288388;
        }
    }
    ctx->pc = 0x288378u;
    // 0x288378: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x288378u;
    {
        const bool branch_taken_0x288378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288378u;
        // 0x28837c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288378) {
            ctx->pc = 0x2883A0u;
            goto label_2883a0;
        }
    }
    ctx->pc = 0x288380u;
    // 0x288380: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x288380u;
    {
        const bool branch_taken_0x288380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288380u;
        // 0x288384: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288380) {
            ctx->pc = 0x2884D0u;
            goto label_2884d0;
        }
    }
    ctx->pc = 0x288388u;
label_288388:
    // 0x288388: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x288388u;
    {
        const bool branch_taken_0x288388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288388u;
        // 0x28838c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288388) {
            ctx->pc = 0x28844Cu;
            goto label_28844c;
        }
    }
    ctx->pc = 0x288390u;
    // 0x288390: 0x50620040  beql        $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x288390u;
    {
        const bool branch_taken_0x288390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x288390) {
            ctx->pc = 0x288394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288390u;
            // 0x288394: 0x8e0215b0  lw          $v0, 0x15B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288494u;
            goto label_288494;
        }
    }
    ctx->pc = 0x288398u;
    // 0x288398: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x288398u;
    {
        const bool branch_taken_0x288398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288398u;
        // 0x28839c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288398) {
            ctx->pc = 0x2884D0u;
            goto label_2884d0;
        }
    }
    ctx->pc = 0x2883A0u;
label_2883a0:
    // 0x2883a0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2883a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2883a4: 0xa2021560  sb          $v0, 0x1560($s0)
    ctx->pc = 0x2883a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5472), (uint8_t)GPR_U32(ctx, 2));
    // 0x2883a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2883a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2883acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2883b0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2883b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2883b4: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x2883b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x2883b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2883b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883bc: 0x8c660144  lw          $a2, 0x144($v1)
    ctx->pc = 0x2883bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x2883c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2883c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2883c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2883c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2883C8u;
    SET_GPR_U32(ctx, 31, 0x2883D0u);
    ctx->pc = 0x2883CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883C8u;
    // 0x2883cc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2883C8u, 0x2883D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883D0u;
label_2883d0:
    // 0x2883d0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2883d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2883d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2883d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2883d8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2883d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2883dc:
    // 0x2883dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2883DCu;
    SET_GPR_U32(ctx, 31, 0x2883E4u);
    ctx->pc = 0x2883E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883DCu;
    // 0x2883e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2883DCu, 0x2883E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883E4u;
label_2883e4:
    // 0x2883e4: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x2883E4u;
    SET_GPR_U32(ctx, 31, 0x2883ECu);
    ctx->pc = 0x2883E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883E4u;
    // 0x2883e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x2883E4u, 0x2883ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883ECu;
label_2883ec:
    // 0x2883ec: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x2883ECu;
    SET_GPR_U32(ctx, 31, 0x2883F4u);
    ctx->pc = 0x2883F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883ECu;
    // 0x2883f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x2883ECu, 0x2883F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883F4u;
label_2883f4:
    // 0x2883f4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2883f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2883f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2883f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2883fc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2883fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x288400: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x288400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x288404: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x288404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x288408: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x288408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28840c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28840cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288410: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x288410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x288414: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x288414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x288418: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x288418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28841c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28841cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x288420: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288428: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x288428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28842c: 0xc0a4404  jal         func_291010
    ctx->pc = 0x28842Cu;
    SET_GPR_U32(ctx, 31, 0x288434u);
    ctx->pc = 0x288430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28842Cu;
    // 0x288430: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x28842Cu, 0x288434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288434u;
label_288434:
    // 0x288434: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x288434u;
    {
        const bool branch_taken_0x288434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288434) {
            ctx->pc = 0x288438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288434u;
            // 0x288438: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2884D0u;
            goto label_2884d0;
        }
    }
    ctx->pc = 0x28843Cu;
    // 0x28843c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28843cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x288440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x288444: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x288444u;
    {
        const bool branch_taken_0x288444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288444u;
        // 0x288448: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288444) {
            ctx->pc = 0x2884CCu;
            goto label_2884cc;
        }
    }
    ctx->pc = 0x28844Cu;
label_28844c:
    // 0x28844c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x288450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288454: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288458: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x288458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28845c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x28845cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x288460: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288460u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288464: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x288464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x288468: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28846c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288470: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288470u;
    SET_GPR_U32(ctx, 31, 0x288478u);
    ctx->pc = 0x288474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288470u;
    // 0x288474: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288470u, 0x288478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288478u;
label_288478:
    // 0x288478: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x288478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x28847c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28847cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288480: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x288480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x288484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288488: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x288488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x28848c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x28848cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x288490: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x288490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_288494:
    // 0x288494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288498: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x288498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28849c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28849Cu;
    SET_GPR_U32(ctx, 31, 0x2884A4u);
    ctx->pc = 0x2884A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28849Cu;
    // 0x2884a0: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28849Cu, 0x2884A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884A4u;
label_2884a4:
    // 0x2884a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2884A4u;
    {
        const bool branch_taken_0x2884a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884A4u;
        // 0x2884a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884a4) {
            ctx->pc = 0x2884BCu;
            goto label_2884bc;
        }
    }
    ctx->pc = 0x2884ACu;
    // 0x2884ac: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2884acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2884b0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2884b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2884b4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2884b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2884b8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2884b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2884bc:
    // 0x2884bc: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x2884BCu;
    SET_GPR_U32(ctx, 31, 0x2884C4u);
    ctx->pc = 0x2884C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884BCu;
    // 0x2884c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x2884BCu, 0x2884C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884C4u;
label_2884c4:
    // 0x2884c4: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x2884C4u;
    SET_GPR_U32(ctx, 31, 0x2884CCu);
    ctx->pc = 0x2884C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884C4u;
    // 0x2884c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x2884C4u, 0x2884CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884CCu;
label_2884cc:
    // 0x2884cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2884ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2884d0:
    // 0x2884d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2884d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2884d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2884D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884D4u;
        // 0x2884d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2884D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2884DCu;
    // 0x2884dc: 0x0  nop
    ctx->pc = 0x2884dcu;
    // NOP
    ctx->pc = 0x2884e0u;
}
