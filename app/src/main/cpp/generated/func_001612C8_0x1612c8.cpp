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

// Function: func_001612C8
// Address: 0x1612c8 - 0x161480
void func_001612C8_0x1612c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001612C8_0x1612c8");
#endif

    switch (ctx->pc) {
        case 0x16130cu: goto label_16130c;
        case 0x161320u: goto label_161320;
        case 0x161328u: goto label_161328;
        case 0x161330u: goto label_161330;
        case 0x16133cu: goto label_16133c;
        case 0x161350u: goto label_161350;
        case 0x161360u: goto label_161360;
        case 0x161370u: goto label_161370;
        case 0x161388u: goto label_161388;
        case 0x1613a8u: goto label_1613a8;
        case 0x1613c0u: goto label_1613c0;
        case 0x1613d8u: goto label_1613d8;
        case 0x1613e4u: goto label_1613e4;
        case 0x1613f8u: goto label_1613f8;
        case 0x161404u: goto label_161404;
        case 0x16141cu: goto label_16141c;
        case 0x161434u: goto label_161434;
        case 0x161448u: goto label_161448;
        case 0x161454u: goto label_161454;
        default: break;
    }

    ctx->pc = 0x1612c8u;

    // 0x1612c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1612c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1612cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1612ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1612d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1612d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1612d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1612d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1612d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1612dc: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x1612dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
    // 0x1612e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1612e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1612e4: 0x2673f190  addiu       $s3, $s3, -0xE70
    ctx->pc = 0x1612e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963600));
    // 0x1612e8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1612e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1612ec: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x1612ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1612f0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1612f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1612f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1612f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612f8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1612f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1612fc: 0x26120310  addiu       $s2, $s0, 0x310
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x161300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161304: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161304u;
    SET_GPR_U32(ctx, 31, 0x16130Cu);
    ctx->pc = 0x161308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161304u;
    // 0x161308: 0xae330070  sw          $s3, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161304u, 0x16130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16130Cu;
label_16130c:
    // 0x16130c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x161310: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x161314: 0x2463f6c8  addiu       $v1, $v1, -0x938
    ctx->pc = 0x161314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964936));
    // 0x161318: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161318u;
    SET_GPR_U32(ctx, 31, 0x161320u);
    ctx->pc = 0x16131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161318u;
    // 0x16131c: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161318u, 0x161320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161320u;
label_161320:
    // 0x161320: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161320u;
    SET_GPR_U32(ctx, 31, 0x161328u);
    ctx->pc = 0x161324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161320u;
    // 0x161324: 0x260401e0  addiu       $a0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161320u, 0x161328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161328u;
label_161328:
    // 0x161328: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161328u;
    SET_GPR_U32(ctx, 31, 0x161330u);
    ctx->pc = 0x16132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161328u;
    // 0x16132c: 0x26040290  addiu       $a0, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161328u, 0x161330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161330u;
label_161330:
    // 0x161330: 0xae530070  sw          $s3, 0x70($s2)
    ctx->pc = 0x161330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 19));
    // 0x161334: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161334u;
    SET_GPR_U32(ctx, 31, 0x16133Cu);
    ctx->pc = 0x161338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161334u;
    // 0x161338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161334u, 0x16133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16133Cu;
label_16133c:
    // 0x16133c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x161340: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x161344: 0x2463ff30  addiu       $v1, $v1, -0xD0
    ctx->pc = 0x161344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967088));
    // 0x161348: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161348u;
    SET_GPR_U32(ctx, 31, 0x161350u);
    ctx->pc = 0x16134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161348u;
    // 0x16134c: 0xae430070  sw          $v1, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161348u, 0x161350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161350u;
label_161350:
    // 0x161350: 0xfa000580  sqc2        $vf0, 0x580($s0)
    ctx->pc = 0x161350u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x161354: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x161354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x161358: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161358u;
    SET_GPR_U32(ctx, 31, 0x161360u);
    ctx->pc = 0x16135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161358u;
    // 0x16135c: 0x26110620  addiu       $s1, $s0, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161358u, 0x161360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161360u;
label_161360:
    // 0x161360: 0x26120730  addiu       $s2, $s0, 0x730
    ctx->pc = 0x161360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1840));
    // 0x161364: 0xae330070  sw          $s3, 0x70($s1)
    ctx->pc = 0x161364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    // 0x161368: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161368u;
    SET_GPR_U32(ctx, 31, 0x161370u);
    ctx->pc = 0x16136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161368u;
    // 0x16136c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161368u, 0x161370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161370u;
label_161370:
    // 0x161370: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x161370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x161374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x161374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161378: 0x2463f388  addiu       $v1, $v1, -0xC78
    ctx->pc = 0x161378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964104));
    // 0x16137c: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x16137cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x161380: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161380u;
    SET_GPR_U32(ctx, 31, 0x161388u);
    ctx->pc = 0x161384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161380u;
    // 0x161384: 0xae530070  sw          $s3, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161380u, 0x161388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161388u;
label_161388:
    // 0x161388: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16138c: 0x2463f5e0  addiu       $v1, $v1, -0xA20
    ctx->pc = 0x16138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964704));
    // 0x161390: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x161390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    // 0x161394: 0xfa000830  sqc2        $vf0, 0x830($s0)
    ctx->pc = 0x161394u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2096), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x161398: 0xfa000840  sqc2        $vf0, 0x840($s0)
    ctx->pc = 0x161398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16139c: 0x26040868  addiu       $a0, $s0, 0x868
    ctx->pc = 0x16139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2152));
    // 0x1613a0: 0xc0afa5a  jal         func_2BE968
    ctx->pc = 0x1613A0u;
    SET_GPR_U32(ctx, 31, 0x1613A8u);
    ctx->pc = 0x1613A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613A0u;
    // 0x1613a4: 0x26110880  addiu       $s1, $s0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE968u, 0x1613A0u, 0x1613A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1613A8u;
label_1613a8:
    // 0x1613a8: 0x261209c0  addiu       $s2, $s0, 0x9C0
    ctx->pc = 0x1613a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2496));
    // 0x1613ac: 0xae330070  sw          $s3, 0x70($s1)
    ctx->pc = 0x1613acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    // 0x1613b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1613b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613b4: 0x26140ae0  addiu       $s4, $s0, 0xAE0
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2784));
    // 0x1613b8: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1613B8u;
    SET_GPR_U32(ctx, 31, 0x1613C0u);
    ctx->pc = 0x1613BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613B8u;
    // 0x1613bc: 0x26150ba0  addiu       $s5, $s0, 0xBA0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1613B8u, 0x1613C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1613C0u;
label_1613c0:
    // 0x1613c0: 0x26160c40  addiu       $s6, $s0, 0xC40
    ctx->pc = 0x1613c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 3136));
    // 0x1613c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1613c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1613c8: 0x26040960  addiu       $a0, $s0, 0x960
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2400));
    // 0x1613cc: 0x2442fb20  addiu       $v0, $v0, -0x4E0
    ctx->pc = 0x1613ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966048));
    // 0x1613d0: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1613D0u;
    SET_GPR_U32(ctx, 31, 0x1613D8u);
    ctx->pc = 0x1613D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613D0u;
    // 0x1613d4: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1613D0u, 0x1613D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1613D8u;
label_1613d8:
    // 0x1613d8: 0xae530070  sw          $s3, 0x70($s2)
    ctx->pc = 0x1613d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 19));
    // 0x1613dc: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1613DCu;
    SET_GPR_U32(ctx, 31, 0x1613E4u);
    ctx->pc = 0x1613E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613DCu;
    // 0x1613e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1613DCu, 0x1613E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1613E4u;
label_1613e4:
    // 0x1613e4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1613e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1613e8: 0x26040a80  addiu       $a0, $s0, 0xA80
    ctx->pc = 0x1613e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2688));
    // 0x1613ec: 0x2463fbe8  addiu       $v1, $v1, -0x418
    ctx->pc = 0x1613ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966248));
    // 0x1613f0: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1613F0u;
    SET_GPR_U32(ctx, 31, 0x1613F8u);
    ctx->pc = 0x1613F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613F0u;
    // 0x1613f4: 0xae430070  sw          $v1, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1613F0u, 0x1613F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1613F8u;
label_1613f8:
    // 0x1613f8: 0xae930070  sw          $s3, 0x70($s4)
    ctx->pc = 0x1613f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 19));
    // 0x1613fc: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1613FCu;
    SET_GPR_U32(ctx, 31, 0x161404u);
    ctx->pc = 0x161400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613FCu;
    // 0x161400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1613FCu, 0x161404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161404u;
label_161404:
    // 0x161404: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x161404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x161408: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16140c: 0x2463f200  addiu       $v1, $v1, -0xE00
    ctx->pc = 0x16140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963712));
    // 0x161410: 0xae830070  sw          $v1, 0x70($s4)
    ctx->pc = 0x161410u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 3));
    // 0x161414: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161414u;
    SET_GPR_U32(ctx, 31, 0x16141Cu);
    ctx->pc = 0x161418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161414u;
    // 0x161418: 0xaeb30070  sw          $s3, 0x70($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161414u, 0x16141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16141Cu;
label_16141c:
    // 0x16141c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16141cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x161420: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x161420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161424: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x161424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
    // 0x161428: 0xaea30070  sw          $v1, 0x70($s5)
    ctx->pc = 0x161428u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 3));
    // 0x16142c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x16142Cu;
    SET_GPR_U32(ctx, 31, 0x161434u);
    ctx->pc = 0x161430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16142Cu;
    // 0x161430: 0xaed30070  sw          $s3, 0x70($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x16142Cu, 0x161434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161434u;
label_161434:
    // 0x161434: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x161438: 0x26040d10  addiu       $a0, $s0, 0xD10
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3344));
    // 0x16143c: 0x2463fdf8  addiu       $v1, $v1, -0x208
    ctx->pc = 0x16143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966776));
    // 0x161440: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x161440u;
    SET_GPR_U32(ctx, 31, 0x161448u);
    ctx->pc = 0x161444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161440u;
    // 0x161444: 0xaec30070  sw          $v1, 0x70($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x161440u, 0x161448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161448u;
label_161448:
    // 0x161448: 0xfa000e30  sqc2        $vf0, 0xE30($s0)
    ctx->pc = 0x161448u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 3632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16144c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x16144Cu;
    SET_GPR_U32(ctx, 31, 0x161454u);
    ctx->pc = 0x161450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16144Cu;
    // 0x161450: 0x26040e50  addiu       $a0, $s0, 0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x16144Cu, 0x161454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161454u;
label_161454:
    // 0x161454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161458: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x161458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16145c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16145cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161460: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x161460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161464: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x161464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161468: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x161468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16146c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x16146cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161470: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x161470u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161478: 0x3e00008  jr          $ra
    ctx->pc = 0x161478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161478u;
        // 0x16147c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161480u;
}
