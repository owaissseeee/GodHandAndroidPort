#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlaySeq__C9cEventBgmPC12cEventSeqBgm
// Address: 0x7ac828 - 0x7aca90
void movePlaySeq__C9cEventBgmPC12cEventSeqBgm_0x7ac828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeq__C9cEventBgmPC12cEventSeqBgm_0x7ac828");
#endif

    switch (ctx->pc) {
        case 0x7ac848u: goto label_7ac848;
        case 0x7ac88cu: goto label_7ac88c;
        case 0x7ac8b8u: goto label_7ac8b8;
        case 0x7ac8e8u: goto label_7ac8e8;
        case 0x7ac918u: goto label_7ac918;
        case 0x7ac944u: goto label_7ac944;
        case 0x7ac960u: goto label_7ac960;
        case 0x7ac984u: goto label_7ac984;
        case 0x7ac9a4u: goto label_7ac9a4;
        case 0x7ac9dcu: goto label_7ac9dc;
        case 0x7ac9fcu: goto label_7ac9fc;
        case 0x7aca20u: goto label_7aca20;
        case 0x7aca44u: goto label_7aca44;
        case 0x7aca7cu: goto label_7aca7c;
        default: break;
    }

    ctx->pc = 0x7ac828u;

    // 0x7ac828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ac828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ac82c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ac82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ac830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ac830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ac834: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x7ac834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x7ac838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7ac838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac840: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7AC840u;
    SET_GPR_U32(ctx, 31, 0x7AC848u);
    ctx->pc = 0x7AC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC840u;
    // 0x7ac844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7AC840u, 0x7AC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC848u;
label_7ac848:
    // 0x7ac848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7ac848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7ac84c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AC84Cu;
    {
        const bool branch_taken_0x7ac84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ac84c) {
            ctx->pc = 0x7AC850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC84Cu;
            // 0x7ac850: 0x96030008  lhu         $v1, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC868u;
            goto label_7ac868;
        }
    }
    ctx->pc = 0x7AC854u;
    // 0x7ac854: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x7ac854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ac858: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x7ac858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x7ac85c: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x7AC85Cu;
    {
        const bool branch_taken_0x7ac85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ac85c) {
            ctx->pc = 0x7AC860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC85Cu;
            // 0x7ac860: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC864u;
    // 0x7ac864: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x7ac864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_7ac868:
    // 0x7ac868: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x7ac868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x7ac86c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AC86Cu;
    {
        const bool branch_taken_0x7ac86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC86Cu;
        // 0x7ac870: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac86c) {
            ctx->pc = 0x7AC894u;
            goto label_7ac894;
        }
    }
    ctx->pc = 0x7AC874u;
    // 0x7ac874: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x7ac874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7ac878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7ac878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ac87c: 0x0  nop
    ctx->pc = 0x7ac87cu;
    // NOP
    // 0x7ac880: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7ac880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7ac884: 0xc0b4838  jal         func_2D20E0
    ctx->pc = 0x7AC884u;
    SET_GPR_U32(ctx, 31, 0x7AC88Cu);
    ctx->pc = 0x7AC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC884u;
    // 0x7ac888: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D20E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D20E0u, 0x7AC884u, 0x7AC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC88Cu;
label_7ac88c:
    // 0x7ac88c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x7AC88Cu;
    {
        const bool branch_taken_0x7ac88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC88Cu;
        // 0x7ac890: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac88c) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC894u;
label_7ac894:
    // 0x7ac894: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x7ac894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x7ac898: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AC898u;
    {
        const bool branch_taken_0x7ac898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC898u;
        // 0x7ac89c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac898) {
            ctx->pc = 0x7AC8C0u;
            goto label_7ac8c0;
        }
    }
    ctx->pc = 0x7AC8A0u;
    // 0x7ac8a0: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x7ac8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7ac8a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7ac8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ac8a8: 0x0  nop
    ctx->pc = 0x7ac8a8u;
    // NOP
    // 0x7ac8ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7ac8acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7ac8b0: 0xc0b4822  jal         func_2D2088
    ctx->pc = 0x7AC8B0u;
    SET_GPR_U32(ctx, 31, 0x7AC8B8u);
    ctx->pc = 0x7AC8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC8B0u;
    // 0x7ac8b4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2088u, 0x7AC8B0u, 0x7AC8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC8B8u;
label_7ac8b8:
    // 0x7ac8b8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x7AC8B8u;
    {
        const bool branch_taken_0x7ac8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC8B8u;
        // 0x7ac8bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac8b8) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC8C0u;
label_7ac8c0:
    // 0x7ac8c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7AC8C0u;
    {
        const bool branch_taken_0x7ac8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC8C0u;
        // 0x7ac8c4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac8c0) {
            ctx->pc = 0x7AC8F0u;
            goto label_7ac8f0;
        }
    }
    ctx->pc = 0x7AC8C8u;
    // 0x7ac8c8: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x7ac8c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7ac8cc: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x7ac8ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7ac8d0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7ac8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7ac8d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7ac8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ac8d8: 0x0  nop
    ctx->pc = 0x7ac8d8u;
    // NOP
    // 0x7ac8dc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7ac8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7ac8e0: 0xc0b485e  jal         func_2D2178
    ctx->pc = 0x7AC8E0u;
    SET_GPR_U32(ctx, 31, 0x7AC8E8u);
    ctx->pc = 0x7AC8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC8E0u;
    // 0x7ac8e4: 0x9205000a  lbu         $a1, 0xA($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2178u, 0x7AC8E0u, 0x7AC8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC8E8u;
label_7ac8e8:
    // 0x7ac8e8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x7AC8E8u;
    {
        const bool branch_taken_0x7ac8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC8E8u;
        // 0x7ac8ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac8e8) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC8F0u;
label_7ac8f0:
    // 0x7ac8f0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x7ac8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x7ac8f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7AC8F4u;
    {
        const bool branch_taken_0x7ac8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC8F4u;
        // 0x7ac8f8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac8f4) {
            ctx->pc = 0x7AC920u;
            goto label_7ac920;
        }
    }
    ctx->pc = 0x7AC8FCu;
    // 0x7ac8fc: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x7ac8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7ac900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ac900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7ac904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ac908: 0x0  nop
    ctx->pc = 0x7ac908u;
    // NOP
    // 0x7ac90c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7ac90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7ac910: 0xc0b485e  jal         func_2D2178
    ctx->pc = 0x7AC910u;
    SET_GPR_U32(ctx, 31, 0x7AC918u);
    ctx->pc = 0x7AC914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC910u;
    // 0x7ac914: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2178u, 0x7AC910u, 0x7AC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC918u;
label_7ac918:
    // 0x7ac918: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x7AC918u;
    {
        const bool branch_taken_0x7ac918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC918u;
        // 0x7ac91c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac918) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC920u;
label_7ac920:
    // 0x7ac920: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x7ac920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x7ac924: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7AC924u;
    {
        const bool branch_taken_0x7ac924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC924u;
        // 0x7ac928: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac924) {
            ctx->pc = 0x7AC968u;
            goto label_7ac968;
        }
    }
    ctx->pc = 0x7AC92Cu;
    // 0x7ac92c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AC92Cu;
    {
        const bool branch_taken_0x7ac92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC92Cu;
        // 0x7ac930: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac92c) {
            ctx->pc = 0x7AC94Cu;
            goto label_7ac94c;
        }
    }
    ctx->pc = 0x7AC934u;
    // 0x7ac934: 0x86060018  lh          $a2, 0x18($s0)
    ctx->pc = 0x7ac934u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7ac938: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x7ac938u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7ac93c: 0xc0b418c  jal         func_2D0630
    ctx->pc = 0x7AC93Cu;
    SET_GPR_U32(ctx, 31, 0x7AC944u);
    ctx->pc = 0x7AC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC93Cu;
    // 0x7ac940: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0630u, 0x7AC93Cu, 0x7AC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC944u;
label_7ac944:
    // 0x7ac944: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x7AC944u;
    {
        const bool branch_taken_0x7ac944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC944u;
        // 0x7ac948: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac944) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC94Cu;
label_7ac94c:
    // 0x7ac94c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7ac94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7ac950: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x7ac950u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7ac954: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7ac954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7ac958: 0xc0b418c  jal         func_2D0630
    ctx->pc = 0x7AC958u;
    SET_GPR_U32(ctx, 31, 0x7AC960u);
    ctx->pc = 0x7AC95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC958u;
    // 0x7ac95c: 0x94467a50  lhu         $a2, 0x7A50($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0630u, 0x7AC958u, 0x7AC960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC960u;
label_7ac960:
    // 0x7ac960: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x7AC960u;
    {
        const bool branch_taken_0x7ac960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC960u;
        // 0x7ac964: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac960) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC968u;
label_7ac968:
    // 0x7ac968: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x7ac968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x7ac96c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AC96Cu;
    {
        const bool branch_taken_0x7ac96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC96Cu;
        // 0x7ac970: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac96c) {
            ctx->pc = 0x7AC98Cu;
            goto label_7ac98c;
        }
    }
    ctx->pc = 0x7AC974u;
    // 0x7ac974: 0x9606000e  lhu         $a2, 0xE($s0)
    ctx->pc = 0x7ac974u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7ac978: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7ac978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7ac97c: 0xc0b4b06  jal         func_2D2C18
    ctx->pc = 0x7AC97Cu;
    SET_GPR_U32(ctx, 31, 0x7AC984u);
    ctx->pc = 0x7AC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC97Cu;
    // 0x7ac980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2C18u, 0x7AC97Cu, 0x7AC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC984u;
label_7ac984:
    // 0x7ac984: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x7AC984u;
    {
        const bool branch_taken_0x7ac984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC984u;
        // 0x7ac988: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac984) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC98Cu;
label_7ac98c:
    // 0x7ac98c: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x7ac98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x7ac990: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AC990u;
    {
        const bool branch_taken_0x7ac990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC990u;
        // 0x7ac994: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac990) {
            ctx->pc = 0x7AC9ACu;
            goto label_7ac9ac;
        }
    }
    ctx->pc = 0x7AC998u;
    // 0x7ac998: 0x9606000e  lhu         $a2, 0xE($s0)
    ctx->pc = 0x7ac998u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7ac99c: 0xc0b4b06  jal         func_2D2C18
    ctx->pc = 0x7AC99Cu;
    SET_GPR_U32(ctx, 31, 0x7AC9A4u);
    ctx->pc = 0x7AC9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC99Cu;
    // 0x7ac9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2C18u, 0x7AC99Cu, 0x7AC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC9A4u;
label_7ac9a4:
    // 0x7ac9a4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x7AC9A4u;
    {
        const bool branch_taken_0x7ac9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC9A4u;
        // 0x7ac9a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac9a4) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC9ACu;
label_7ac9ac:
    // 0x7ac9ac: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x7ac9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x7ac9b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7AC9B0u;
    {
        const bool branch_taken_0x7ac9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC9B0u;
        // 0x7ac9b4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac9b0) {
            ctx->pc = 0x7AC9E4u;
            goto label_7ac9e4;
        }
    }
    ctx->pc = 0x7AC9B8u;
    // 0x7ac9b8: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x7ac9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7ac9bc: 0x9607000e  lhu         $a3, 0xE($s0)
    ctx->pc = 0x7ac9bcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7ac9c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7ac9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7ac9c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7ac9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ac9c8: 0x0  nop
    ctx->pc = 0x7ac9c8u;
    // NOP
    // 0x7ac9cc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7ac9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7ac9d0: 0x9205000a  lbu         $a1, 0xA($s0)
    ctx->pc = 0x7ac9d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7ac9d4: 0xc0b4b5a  jal         func_2D2D68
    ctx->pc = 0x7AC9D4u;
    SET_GPR_U32(ctx, 31, 0x7AC9DCu);
    ctx->pc = 0x7AC9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC9D4u;
    // 0x7ac9d8: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D68u, 0x7AC9D4u, 0x7AC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC9DCu;
label_7ac9dc:
    // 0x7ac9dc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x7AC9DCu;
    {
        const bool branch_taken_0x7ac9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC9DCu;
        // 0x7ac9e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac9dc) {
            ctx->pc = 0x7ACA80u;
            goto label_7aca80;
        }
    }
    ctx->pc = 0x7AC9E4u;
label_7ac9e4:
    // 0x7ac9e4: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x7ac9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x7ac9e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AC9E8u;
    {
        const bool branch_taken_0x7ac9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC9E8u;
        // 0x7ac9ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac9e8) {
            ctx->pc = 0x7AC9FCu;
            goto label_7ac9fc;
        }
    }
    ctx->pc = 0x7AC9F0u;
    // 0x7ac9f0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7ac9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7ac9f4: 0xc0b4600  jal         func_2D1800
    ctx->pc = 0x7AC9F4u;
    SET_GPR_U32(ctx, 31, 0x7AC9FCu);
    ctx->pc = 0x7AC9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC9F4u;
    // 0x7ac9f8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1800u, 0x7AC9F4u, 0x7AC9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC9FCu;
label_7ac9fc:
    // 0x7ac9fc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x7ac9fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7aca00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7aca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7aca04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x7ACA04u;
    {
        const bool branch_taken_0x7aca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aca04) {
            ctx->pc = 0x7ACA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACA04u;
            // 0x7aca08: 0x96020008  lhu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACA24u;
            goto label_7aca24;
        }
    }
    ctx->pc = 0x7ACA0Cu;
    // 0x7aca0c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7aca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7aca10: 0x9205000a  lbu         $a1, 0xA($s0)
    ctx->pc = 0x7aca10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7aca14: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x7aca14u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7aca18: 0xc0b471e  jal         func_2D1C78
    ctx->pc = 0x7ACA18u;
    SET_GPR_U32(ctx, 31, 0x7ACA20u);
    ctx->pc = 0x7ACA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACA18u;
    // 0x7aca1c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C78u, 0x7ACA18u, 0x7ACA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACA20u;
label_7aca20:
    // 0x7aca20: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x7aca20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_7aca24:
    // 0x7aca24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7aca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7aca28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ACA28u;
    {
        const bool branch_taken_0x7aca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACA28u;
        // 0x7aca2c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aca28) {
            ctx->pc = 0x7ACA44u;
            goto label_7aca44;
        }
    }
    ctx->pc = 0x7ACA30u;
    // 0x7aca30: 0x9205000a  lbu         $a1, 0xA($s0)
    ctx->pc = 0x7aca30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7aca34: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x7aca34u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7aca38: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7aca38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7aca3c: 0xc0b4740  jal         func_2D1D00
    ctx->pc = 0x7ACA3Cu;
    SET_GPR_U32(ctx, 31, 0x7ACA44u);
    ctx->pc = 0x7ACA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACA3Cu;
    // 0x7aca40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D00u, 0x7ACA3Cu, 0x7ACA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACA44u;
label_7aca44:
    // 0x7aca44: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x7aca44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7aca48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x7aca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x7aca4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7ACA4Cu;
    {
        const bool branch_taken_0x7aca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACA4Cu;
        // 0x7aca50: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aca4c) {
            ctx->pc = 0x7ACA7Cu;
            goto label_7aca7c;
        }
    }
    ctx->pc = 0x7ACA54u;
    // 0x7aca54: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x7aca54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7aca58: 0xc60e0010  lwc1        $f14, 0x10($s0)
    ctx->pc = 0x7aca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x7aca5c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7aca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7aca60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7aca60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7aca64: 0x0  nop
    ctx->pc = 0x7aca64u;
    // NOP
    // 0x7aca68: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7aca68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7aca6c: 0x9205000a  lbu         $a1, 0xA($s0)
    ctx->pc = 0x7aca6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7aca70: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x7aca70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7aca74: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x7ACA74u;
    SET_GPR_U32(ctx, 31, 0x7ACA7Cu);
    ctx->pc = 0x7ACA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACA74u;
    // 0x7aca78: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1FA0u, 0x7ACA74u, 0x7ACA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACA7Cu;
label_7aca7c:
    // 0x7aca7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7aca7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7aca80:
    // 0x7aca80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aca84: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACA84u;
        // 0x7aca88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACA8Cu;
    // 0x7aca8c: 0x0  nop
    ctx->pc = 0x7aca8cu;
    // NOP
    ctx->pc = 0x7aca90u;
}
} // namespace gh_event
