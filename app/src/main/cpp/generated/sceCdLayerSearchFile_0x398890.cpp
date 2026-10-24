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

// Function: sceCdLayerSearchFile
// Address: 0x398890 - 0x398b90
void sceCdLayerSearchFile_0x398890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdLayerSearchFile_0x398890");
#endif

    switch (ctx->pc) {
        case 0x3988d0u: goto label_3988d0;
        case 0x3988dcu: goto label_3988dc;
        case 0x3988fcu: goto label_3988fc;
        case 0x39890cu: goto label_39890c;
        case 0x398928u: goto label_398928;
        case 0x398930u: goto label_398930;
        case 0x398950u: goto label_398950;
        case 0x398964u: goto label_398964;
        case 0x398984u: goto label_398984;
        case 0x398990u: goto label_398990;
        case 0x3989f0u: goto label_3989f0;
        case 0x398a44u: goto label_398a44;
        case 0x398a60u: goto label_398a60;
        case 0x398a88u: goto label_398a88;
        case 0x398a9cu: goto label_398a9c;
        case 0x398b10u: goto label_398b10;
        case 0x398b28u: goto label_398b28;
        case 0x398b40u: goto label_398b40;
        case 0x398b58u: goto label_398b58;
        default: break;
    }

    ctx->pc = 0x398890u;

    // 0x398890: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x398890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x398894: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x398894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x398898: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x398898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x39889c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39889cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3988a0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3988a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3988a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3988a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3988a8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3988a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3988ac: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3988acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3988b0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x3988b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x3988b4: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x3988b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x3988b8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x3988b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x3988bc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3988bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3988c0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3988c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3988c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3988c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3988c8: 0xc0e618e  jal         func_398638
    ctx->pc = 0x3988C8u;
    SET_GPR_U32(ctx, 31, 0x3988D0u);
    ctx->pc = 0x3988CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3988C8u;
    // 0x3988cc: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398638u, 0x3988C8u, 0x3988D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3988D0u;
label_3988d0:
    // 0x3988d0: 0x8ec48668  lw          $a0, -0x7998($s6)
    ctx->pc = 0x3988d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
    // 0x3988d4: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x3988D4u;
    SET_GPR_U32(ctx, 31, 0x3988DCu);
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x3988D4u, 0x3988DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3988DCu;
label_3988dc:
    // 0x3988dc: 0x8ec38668  lw          $v1, -0x7998($s6)
    ctx->pc = 0x3988dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
    // 0x3988e0: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3988E0u;
    {
        const bool branch_taken_0x3988e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3988E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988E0u;
        // 0x3988e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3988e0) {
            ctx->pc = 0x398B5Cu;
            goto label_398b5c;
        }
    }
    ctx->pc = 0x3988E8u;
    // 0x3988e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3988e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3988ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3988ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3988f0: 0xac62865c  sw          $v0, -0x79A4($v1)
    ctx->pc = 0x3988f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F865Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F865Cu, _value); } while (0);
    // 0x3988f4: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x3988F4u;
    SET_GPR_U32(ctx, 31, 0x3988FCu);
    ctx->pc = 0x3988F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3988F4u;
    // 0x3988f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x3988F4u, 0x3988FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3988FCu;
label_3988fc:
    // 0x3988fc: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x3988FCu;
    {
        const bool branch_taken_0x3988fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988FCu;
        // 0x398900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3988fc) {
            ctx->pc = 0x398A90u;
            goto label_398a90;
        }
    }
    ctx->pc = 0x398904u;
    // 0x398904: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x398904u;
    SET_GPR_U32(ctx, 31, 0x39890Cu);
    ctx->pc = 0x398908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398904u;
    // 0x398908: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x398904u, 0x39890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39890Cu;
label_39890c:
    // 0x39890c: 0x8e22868c  lw          $v0, -0x7974($s1)
    ctx->pc = 0x39890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936204)));
    // 0x398910: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x398910u;
    {
        const bool branch_taken_0x398910 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x398914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398910u;
        // 0x398914: 0x3c170078  lui         $s7, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398910) {
            ctx->pc = 0x3989C4u;
            goto label_3989c4;
        }
    }
    ctx->pc = 0x398918u;
    // 0x398918: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x398918u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x39891c: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x39891cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x398920: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x398920u;
    {
        const bool branch_taken_0x398920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398920u;
        // 0x398924: 0x3c1e0078  lui         $fp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398920) {
            ctx->pc = 0x39894Cu;
            goto label_39894c;
        }
    }
    ctx->pc = 0x398928u;
label_398928:
    // 0x398928: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x398928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39892c: 0x0  nop
    ctx->pc = 0x39892cu;
    // NOP
label_398930:
    // 0x398930: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x398930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x398934: 0x0  nop
    ctx->pc = 0x398934u;
    // NOP
    // 0x398938: 0x0  nop
    ctx->pc = 0x398938u;
    // NOP
    // 0x39893c: 0x0  nop
    ctx->pc = 0x39893cu;
    // NOP
    // 0x398940: 0x0  nop
    ctx->pc = 0x398940u;
    // NOP
    // 0x398944: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x398944u;
    {
        const bool branch_taken_0x398944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398944) {
            ctx->pc = 0x398930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398930;
        }
    }
    ctx->pc = 0x39894Cu;
label_39894c:
    // 0x39894c: 0x26f0c5c0  addiu       $s0, $s7, -0x3A40
    ctx->pc = 0x39894cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952384));
label_398950:
    // 0x398950: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x398950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x398954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398958: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x398958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x39895c: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x39895Cu;
    SET_GPR_U32(ctx, 31, 0x398964u);
    ctx->pc = 0x398960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39895Cu;
    // 0x398960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x39895Cu, 0x398964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398964u;
label_398964:
    // 0x398964: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x398964u;
    {
        const bool branch_taken_0x398964 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x398964) {
            ctx->pc = 0x398968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398964u;
            // 0x398968: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3989B4u;
            goto label_3989b4;
        }
    }
    ctx->pc = 0x39896Cu;
    // 0x39896c: 0x8e828650  lw          $v0, -0x79B0($s4)
    ctx->pc = 0x39896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
    // 0x398970: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398970u;
    {
        const bool branch_taken_0x398970 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x398974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398970u;
        // 0x398974: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398970) {
            ctx->pc = 0x398988u;
            goto label_398988;
        }
    }
    ctx->pc = 0x398978u;
    // 0x398978: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x398978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x39897c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x39897Cu;
    SET_GPR_U32(ctx, 31, 0x398984u);
    ctx->pc = 0x398980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39897Cu;
    // 0x398980: 0x2484e1f0  addiu       $a0, $a0, -0x1E10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x39897Cu, 0x398984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398984u;
label_398984:
    // 0x398984: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x398984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_398988:
    // 0x398988: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x398988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39898c: 0x0  nop
    ctx->pc = 0x39898cu;
    // NOP
label_398990:
    // 0x398990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x398990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x398994: 0x0  nop
    ctx->pc = 0x398994u;
    // NOP
    // 0x398998: 0x0  nop
    ctx->pc = 0x398998u;
    // NOP
    // 0x39899c: 0x0  nop
    ctx->pc = 0x39899cu;
    // NOP
    // 0x3989a0: 0x0  nop
    ctx->pc = 0x3989a0u;
    // NOP
    // 0x3989a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3989A4u;
    {
        const bool branch_taken_0x3989a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3989a4) {
            ctx->pc = 0x398990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398990;
        }
    }
    ctx->pc = 0x3989ACu;
    // 0x3989ac: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3989ACu;
    {
        const bool branch_taken_0x3989ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3989B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989ACu;
        // 0x3989b0: 0x26f0c5c0  addiu       $s0, $s7, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3989ac) {
            ctx->pc = 0x398950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398950;
        }
    }
    ctx->pc = 0x3989B4u;
label_3989b4:
    // 0x3989b4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3989B4u;
    {
        const bool branch_taken_0x3989b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3989B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989B4u;
        // 0x3989b8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3989b4) {
            ctx->pc = 0x398928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398928;
        }
    }
    ctx->pc = 0x3989BCu;
    // 0x3989bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3989BCu;
    {
        const bool branch_taken_0x3989bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3989C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989BCu;
        // 0x3989c0: 0xae20868c  sw          $zero, -0x7974($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294936204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3989bc) {
            ctx->pc = 0x3989D0u;
            goto label_3989d0;
        }
    }
    ctx->pc = 0x3989C4u;
label_3989c4:
    // 0x3989c4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3989c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x3989c8: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3989c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3989cc: 0x3c1e0078  lui         $fp, 0x78
    ctx->pc = 0x3989ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)120 << 16));
label_3989d0:
    // 0x3989d0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3989d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3989d4: 0x26a4c440  addiu       $a0, $s5, -0x3BC0
    ctx->pc = 0x3989d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952000));
    // 0x3989d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3989d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989dc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3989dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3989e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3989E0u;
    {
        const bool branch_taken_0x3989e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3989E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989E0u;
        // 0x3989e4: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3989e0) {
            ctx->pc = 0x398A14u;
            goto label_398a14;
        }
    }
    ctx->pc = 0x3989E8u;
    // 0x3989e8: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x3989e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x3989ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3989ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3989f0:
    // 0x3989f0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x3989f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3989f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3989F4u;
    {
        const bool branch_taken_0x3989f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3989F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989F4u;
        // 0x3989f8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3989f4) {
            ctx->pc = 0x398A14u;
            goto label_398a14;
        }
    }
    ctx->pc = 0x3989FCu;
    // 0x3989fc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x3989fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x398a00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x398a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x398a04: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x398a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x398a08: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x398a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x398a0c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x398A0Cu;
    {
        const bool branch_taken_0x398a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x398a0c) {
            ctx->pc = 0x398A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398A0Cu;
            // 0x398a10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3989F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3989f0;
        }
    }
    ctx->pc = 0x398A14u;
label_398a14:
    // 0x398a14: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x398a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x398a18: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x398A18u;
    {
        const bool branch_taken_0x398a18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x398A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A18u;
        // 0x398a1c: 0x8e828650  lw          $v0, -0x79B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a18) {
            ctx->pc = 0x398A2Cu;
            goto label_398a2c;
        }
    }
    ctx->pc = 0x398A20u;
    // 0x398a20: 0x26a2c440  addiu       $v0, $s5, -0x3BC0
    ctx->pc = 0x398a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952000));
    // 0x398a24: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x398a24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x398a28: 0x8e828650  lw          $v0, -0x79B0($s4)
    ctx->pc = 0x398a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
label_398a2c:
    // 0x398a2c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398A2Cu;
    {
        const bool branch_taken_0x398a2c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x398A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A2Cu;
        // 0x398a30: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a2c) {
            ctx->pc = 0x398A44u;
            goto label_398a44;
        }
    }
    ctx->pc = 0x398A34u;
    // 0x398a34: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x398a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x398a38: 0x2484e210  addiu       $a0, $a0, -0x1DF0
    ctx->pc = 0x398a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959632));
    // 0x398a3c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398A3Cu;
    SET_GPR_U32(ctx, 31, 0x398A44u);
    ctx->pc = 0x398A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A3Cu;
    // 0x398a40: 0x24a5c464  addiu       $a1, $a1, -0x3B9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952036));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398A3Cu, 0x398A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A44u;
label_398a44:
    // 0x398a44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x398a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398a48: 0x26b0c440  addiu       $s0, $s5, -0x3BC0
    ctx->pc = 0x398a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952000));
    // 0x398a4c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x398a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x398a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a54: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x398a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x398a58: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x398A58u;
    SET_GPR_U32(ctx, 31, 0x398A60u);
    ctx->pc = 0x398A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A58u;
    // 0x398a5c: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x398A58u, 0x398A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A60u;
label_398a60:
    // 0x398a60: 0x26e4c5c0  addiu       $a0, $s7, -0x3A40
    ctx->pc = 0x398a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952384));
    // 0x398a64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x398a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x398a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x398a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a74: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x398a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x398a78: 0x27c9c580  addiu       $t1, $fp, -0x3A80
    ctx->pc = 0x398a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952320));
    // 0x398a7c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x398a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x398a80: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x398A80u;
    SET_GPR_U32(ctx, 31, 0x398A88u);
    ctx->pc = 0x398A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A80u;
    // 0x398a84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x398A80u, 0x398A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A88u;
label_398a88:
    // 0x398a88: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398A88u;
    {
        const bool branch_taken_0x398a88 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x398A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A88u;
        // 0x398a8c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a88) {
            ctx->pc = 0x398AA4u;
            goto label_398aa4;
        }
    }
    ctx->pc = 0x398A90u;
label_398a90:
    // 0x398a90: 0x8ec48668  lw          $a0, -0x7998($s6)
    ctx->pc = 0x398a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
    // 0x398a94: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x398A94u;
    SET_GPR_U32(ctx, 31, 0x398A9Cu);
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x398A94u, 0x398A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A9Cu;
label_398a9c:
    // 0x398a9c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x398A9Cu;
    {
        const bool branch_taken_0x398a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A9Cu;
        // 0x398aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a9c) {
            ctx->pc = 0x398B5Cu;
            goto label_398b5c;
        }
    }
    ctx->pc = 0x398AA4u;
label_398aa4:
    // 0x398aa4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x398aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x398aa8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x398aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x398aac: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x398aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x398ab0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x398ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x398ab4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x398ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x398ab8: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x398ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x398abc: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x398abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x398ac0: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x398ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x398ac4: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x398ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x398ac8: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x398ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398acc: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x398accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398ad0: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x398ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398ad4: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x398ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398ad8: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x398ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398adc: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x398adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398ae0: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x398ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398ae4: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x398ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x398ae8: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x398ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x398aec: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x398aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x398af0: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x398af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x398af4: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x398af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x398af8: 0x8e838650  lw          $v1, -0x79B0($s4)
    ctx->pc = 0x398af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
    // 0x398afc: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x398AFCu;
    {
        const bool branch_taken_0x398afc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x398B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AFCu;
        // 0x398b00: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398afc) {
            ctx->pc = 0x398B40u;
            goto label_398b40;
        }
    }
    ctx->pc = 0x398B04u;
    // 0x398b04: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x398b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x398b08: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398B08u;
    SET_GPR_U32(ctx, 31, 0x398B10u);
    ctx->pc = 0x398B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B08u;
    // 0x398b0c: 0x2484e228  addiu       $a0, $a0, -0x1DD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398B08u, 0x398B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B10u;
label_398b10:
    // 0x398b10: 0x8e828650  lw          $v0, -0x79B0($s4)
    ctx->pc = 0x398b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
    // 0x398b14: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x398B14u;
    {
        const bool branch_taken_0x398b14 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x398B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B14u;
        // 0x398b18: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b14) {
            ctx->pc = 0x398B40u;
            goto label_398b40;
        }
    }
    ctx->pc = 0x398B1Cu;
    // 0x398b1c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x398b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x398b20: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398B20u;
    SET_GPR_U32(ctx, 31, 0x398B28u);
    ctx->pc = 0x398B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B20u;
    // 0x398b24: 0x2484e238  addiu       $a0, $a0, -0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398B20u, 0x398B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B28u;
label_398b28:
    // 0x398b28: 0x8e828650  lw          $v0, -0x79B0($s4)
    ctx->pc = 0x398b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
    // 0x398b2c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x398B2Cu;
    {
        const bool branch_taken_0x398b2c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x398B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B2Cu;
        // 0x398b30: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b2c) {
            ctx->pc = 0x398B40u;
            goto label_398b40;
        }
    }
    ctx->pc = 0x398B34u;
    // 0x398b34: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x398b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x398b38: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398B38u;
    SET_GPR_U32(ctx, 31, 0x398B40u);
    ctx->pc = 0x398B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B38u;
    // 0x398b3c: 0x2484e248  addiu       $a0, $a0, -0x1DB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398B38u, 0x398B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B40u;
label_398b40:
    // 0x398b40: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x398b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x398b44: 0x27c2c580  addiu       $v0, $fp, -0x3A80
    ctx->pc = 0x398b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952320));
    // 0x398b48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x398b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x398b4c: 0x8ec48668  lw          $a0, -0x7998($s6)
    ctx->pc = 0x398b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
    // 0x398b50: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x398B50u;
    SET_GPR_U32(ctx, 31, 0x398B58u);
    ctx->pc = 0x398B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B50u;
    // 0x398b54: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x398B50u, 0x398B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B58u;
label_398b58:
    // 0x398b58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x398b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398b5c:
    // 0x398b5c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x398b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x398b60: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x398b60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x398b64: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x398b64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x398b68: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x398b68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x398b6c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x398b6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x398b70: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x398b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x398b74: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x398b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x398b78: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x398b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x398b7c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x398b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398b80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x398b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398b84: 0x3e00008  jr          $ra
    ctx->pc = 0x398B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B84u;
        // 0x398b88: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398B8Cu;
    // 0x398b8c: 0x0  nop
    ctx->pc = 0x398b8cu;
    // NOP
    ctx->pc = 0x398b90u;
}
