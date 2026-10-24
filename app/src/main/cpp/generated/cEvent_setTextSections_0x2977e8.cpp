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

// Function: cEvent_setTextSections
// Address: 0x2977e8 - 0x2979f0
void cEvent_setTextSections_0x2977e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_setTextSections_0x2977e8");
#endif

    switch (ctx->pc) {
        case 0x29782cu: goto label_29782c;
        case 0x297850u: goto label_297850;
        case 0x29786cu: goto label_29786c;
        case 0x297888u: goto label_297888;
        case 0x2978a8u: goto label_2978a8;
        case 0x2978c0u: goto label_2978c0;
        case 0x2978dcu: goto label_2978dc;
        case 0x2978f8u: goto label_2978f8;
        case 0x297914u: goto label_297914;
        case 0x297930u: goto label_297930;
        case 0x29794cu: goto label_29794c;
        case 0x297968u: goto label_297968;
        case 0x297984u: goto label_297984;
        case 0x2979a0u: goto label_2979a0;
        case 0x2979bcu: goto label_2979bc;
        case 0x2979d8u: goto label_2979d8;
        default: break;
    }

    ctx->pc = 0x2977e8u;

    // 0x2977e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2977e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2977ec: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x2977ecu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2977ECu) & 0xFFFFu)) << 16));
    // 0x2977f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2977f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2977f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2977f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2977f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2977f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2977fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2977fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297800: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297800u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297800u) & 0xFFFFu)) << 16));
    // 0x297804: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x297804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297808: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297808u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297808u) & 0xFFFFu))));
    // 0x29780c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x29780cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x297810: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x297810u;
    /* runtime-relocated */ WRITE32(ADD32(GPR_U32(ctx, 5), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297810u) & 0xFFFFu))), GPR_U32(ctx, 2));
    // 0x297814: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x297814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297818: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x297818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29781c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29781cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297820: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297824: 0xc000000  jal         func_000000
    ctx->pc = 0x297824u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297824u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x29782Cu);
        ctx->pc = 0x297828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297824u;
        // 0x297828: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297824u, 0x29782Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29782Cu;
label_29782c:
    // 0x29782c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x29782cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297830: 0x3c100000  lui         $s0, 0x0
    ctx->pc = 0x297830u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297830u) & 0xFFFFu)) << 16));
    // 0x297834: 0x26100000  addiu       $s0, $s0, 0x0
    ctx->pc = 0x297834u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297834u) & 0xFFFFu))));
    // 0x297838: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x297838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29783c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297840: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x297840u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x297844: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297848: 0xc000000  jal         func_000000
    ctx->pc = 0x297848u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297848u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297850u);
        ctx->pc = 0x29784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297848u;
        // 0x29784c: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297848u, 0x297850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297850u;
label_297850:
    // 0x297850: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x297850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297858: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x297858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x29785c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29785cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297860: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297864: 0xc000000  jal         func_000000
    ctx->pc = 0x297864u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297864u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x29786Cu);
        ctx->pc = 0x297868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297864u;
        // 0x297868: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297864u, 0x29786Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29786Cu;
label_29786c:
    // 0x29786c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x29786cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297870: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297870u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297870u) & 0xFFFFu)) << 16));
    // 0x297874: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297874u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297874u) & 0xFFFFu))));
    // 0x297878: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x297878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x29787c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x29787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297880: 0xc0a5f2c  jal         func_297CB0
    ctx->pc = 0x297880u;
    SET_GPR_U32(ctx, 31, 0x297888u);
    ctx->pc = 0x297884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297880u;
    // 0x297884: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CB0u, 0x297880u, 0x297888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297888u;
label_297888:
    // 0x297888: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x297888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29788c: 0x3c100000  lui         $s0, 0x0
    ctx->pc = 0x29788cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x29788Cu) & 0xFFFFu)) << 16));
    // 0x297890: 0x26100000  addiu       $s0, $s0, 0x0
    ctx->pc = 0x297890u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297890u) & 0xFFFFu))));
    // 0x297894: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x297894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x297898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29789c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x29789cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2978a0: 0xc0a5f3e  jal         func_297CF8
    ctx->pc = 0x2978A0u;
    SET_GPR_U32(ctx, 31, 0x2978A8u);
    ctx->pc = 0x2978A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2978A0u;
    // 0x2978a4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CF8u, 0x2978A0u, 0x2978A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978A8u;
label_2978a8:
    // 0x2978a8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2978a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2978ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2978acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978b0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2978b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2978b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2978b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2978b8: 0xc000000  jal         func_000000
    ctx->pc = 0x2978B8u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2978B8u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2978C0u);
        ctx->pc = 0x2978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978B8u;
        // 0x2978bc: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2978B8u, 0x2978C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2978C0u;
label_2978c0:
    // 0x2978c0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2978c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2978c4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2978c4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2978C4u) & 0xFFFFu)) << 16));
    // 0x2978c8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2978c8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2978C8u) & 0xFFFFu))));
    // 0x2978cc: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2978ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2978d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2978d4: 0xc0a5f50  jal         func_297D40
    ctx->pc = 0x2978D4u;
    SET_GPR_U32(ctx, 31, 0x2978DCu);
    ctx->pc = 0x2978D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2978D4u;
    // 0x2978d8: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297D40u, 0x2978D4u, 0x2978DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978DCu;
label_2978dc:
    // 0x2978dc: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2978dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2978e0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2978e0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2978E0u) & 0xFFFFu)) << 16));
    // 0x2978e4: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2978e4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2978E4u) & 0xFFFFu))));
    // 0x2978e8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2978e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2978ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2978ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2978f0: 0xc0a5f62  jal         func_297D88
    ctx->pc = 0x2978F0u;
    SET_GPR_U32(ctx, 31, 0x2978F8u);
    ctx->pc = 0x2978F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2978F0u;
    // 0x2978f4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297D88u, 0x2978F0u, 0x2978F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978F8u;
label_2978f8:
    // 0x2978f8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2978f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2978fc: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2978fcu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2978FCu) & 0xFFFFu)) << 16));
    // 0x297900: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297900u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297900u) & 0xFFFFu))));
    // 0x297904: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x297904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x297908: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x29790c: 0xc0a5f74  jal         func_297DD0
    ctx->pc = 0x29790Cu;
    SET_GPR_U32(ctx, 31, 0x297914u);
    ctx->pc = 0x297910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29790Cu;
    // 0x297910: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DD0u, 0x29790Cu, 0x297914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297914u;
label_297914:
    // 0x297914: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x297914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297918: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297918u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297918u) & 0xFFFFu)) << 16));
    // 0x29791c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x29791cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x29791Cu) & 0xFFFFu))));
    // 0x297920: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x297920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x297924: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297928: 0xc0a5f86  jal         func_297E18
    ctx->pc = 0x297928u;
    SET_GPR_U32(ctx, 31, 0x297930u);
    ctx->pc = 0x29792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297928u;
    // 0x29792c: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E18u, 0x297928u, 0x297930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297930u;
label_297930:
    // 0x297930: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x297930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297934: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297934u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297934u) & 0xFFFFu)) << 16));
    // 0x297938: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297938u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297938u) & 0xFFFFu))));
    // 0x29793c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x29793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x297940: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297944: 0xc0a5f98  jal         func_297E60
    ctx->pc = 0x297944u;
    SET_GPR_U32(ctx, 31, 0x29794Cu);
    ctx->pc = 0x297948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297944u;
    // 0x297948: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E60u, 0x297944u, 0x29794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29794Cu;
label_29794c:
    // 0x29794c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x29794cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297950: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297950u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297950u) & 0xFFFFu)) << 16));
    // 0x297954: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297954u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297954u) & 0xFFFFu))));
    // 0x297958: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x297958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x29795c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x29795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297960: 0xc0a5faa  jal         func_297EA8
    ctx->pc = 0x297960u;
    SET_GPR_U32(ctx, 31, 0x297968u);
    ctx->pc = 0x297964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297960u;
    // 0x297964: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297EA8u, 0x297960u, 0x297968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297968u;
label_297968:
    // 0x297968: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x297968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29796c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x29796cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x29796Cu) & 0xFFFFu)) << 16));
    // 0x297970: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297970u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297970u) & 0xFFFFu))));
    // 0x297974: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x297974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x297978: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x29797c: 0xc0a5fbc  jal         func_297EF0
    ctx->pc = 0x29797Cu;
    SET_GPR_U32(ctx, 31, 0x297984u);
    ctx->pc = 0x297980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29797Cu;
    // 0x297980: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297EF0u, 0x29797Cu, 0x297984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297984u;
label_297984:
    // 0x297984: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x297984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297988: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297988u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297988u) & 0xFFFFu)) << 16));
    // 0x29798c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x29798cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x29798Cu) & 0xFFFFu))));
    // 0x297990: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x297990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x297994: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x297994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x297998: 0xc0a5fce  jal         func_297F38
    ctx->pc = 0x297998u;
    SET_GPR_U32(ctx, 31, 0x2979A0u);
    ctx->pc = 0x29799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297998u;
    // 0x29799c: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F38u, 0x297998u, 0x2979A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979A0u;
label_2979a0:
    // 0x2979a0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2979a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2979a4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2979a4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2979A4u) & 0xFFFFu)) << 16));
    // 0x2979a8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2979a8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2979A8u) & 0xFFFFu))));
    // 0x2979ac: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2979acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2979b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2979b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2979b4: 0xc0a5fe0  jal         func_297F80
    ctx->pc = 0x2979B4u;
    SET_GPR_U32(ctx, 31, 0x2979BCu);
    ctx->pc = 0x2979B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979B4u;
    // 0x2979b8: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F80u, 0x2979B4u, 0x2979BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979BCu;
label_2979bc:
    // 0x2979bc: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2979bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2979c0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2979c0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2979C0u) & 0xFFFFu)) << 16));
    // 0x2979c4: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2979c4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2979C4u) & 0xFFFFu))));
    // 0x2979c8: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x2979c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2979cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2979ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2979d0: 0xc0a5ff2  jal         func_297FC8
    ctx->pc = 0x2979D0u;
    SET_GPR_U32(ctx, 31, 0x2979D8u);
    ctx->pc = 0x2979D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979D0u;
    // 0x2979d4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FC8u, 0x2979D0u, 0x2979D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979D8u;
label_2979d8:
    // 0x2979d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2979d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2979dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2979dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2979e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2979e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2979e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2979E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2979E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979E4u;
        // 0x2979e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2979ECu;
    // 0x2979ec: 0x0  nop
    ctx->pc = 0x2979ecu;
    // NOP
    ctx->pc = 0x2979f0u;
}
