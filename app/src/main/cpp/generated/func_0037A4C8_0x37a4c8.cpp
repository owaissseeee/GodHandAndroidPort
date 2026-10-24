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

// Function: func_0037A4C8
// Address: 0x37a4c8 - 0x37a5f0
void func_0037A4C8_0x37a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A4C8_0x37a4c8");
#endif

    switch (ctx->pc) {
        case 0x37a528u: goto label_37a528;
        case 0x37a544u: goto label_37a544;
        case 0x37a55cu: goto label_37a55c;
        case 0x37a5b0u: goto label_37a5b0;
        case 0x37a5c0u: goto label_37a5c0;
        case 0x37a5d0u: goto label_37a5d0;
        default: break;
    }

    ctx->pc = 0x37a4c8u;

    // 0x37a4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37a4cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37a4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a4d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a4d8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x37a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37a4dc: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x37a4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x37a4e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x37A4E0u;
    {
        const bool branch_taken_0x37a4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4E0u;
        // 0x37a4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4e0) {
            ctx->pc = 0x37A564u;
            goto label_37a564;
        }
    }
    ctx->pc = 0x37A4E8u;
    // 0x37a4e8: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x37a4e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x37a4ec: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37A4ECu;
    {
        const bool branch_taken_0x37a4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4ECu;
        // 0x37a4f0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4ec) {
            ctx->pc = 0x37A530u;
            goto label_37a530;
        }
    }
    ctx->pc = 0x37A4F4u;
    // 0x37a4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A4F4u;
    {
        const bool branch_taken_0x37a4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4F4u;
        // 0x37a4f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4f4) {
            ctx->pc = 0x37A50Cu;
            goto label_37a50c;
        }
    }
    ctx->pc = 0x37A4FCu;
    // 0x37a4fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A4FCu;
    {
        const bool branch_taken_0x37a4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4FCu;
        // 0x37a500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4fc) {
            ctx->pc = 0x37A51Cu;
            goto label_37a51c;
        }
    }
    ctx->pc = 0x37A504u;
    // 0x37a504: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x37A504u;
    {
        const bool branch_taken_0x37a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A504u;
        // 0x37a508: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a504) {
            ctx->pc = 0x37A5E0u;
            goto label_37a5e0;
        }
    }
    ctx->pc = 0x37A50Cu;
label_37a50c:
    // 0x37a50c: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x37A50Cu;
    {
        const bool branch_taken_0x37a50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A50Cu;
        // 0x37a510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a50c) {
            ctx->pc = 0x37A54Cu;
            goto label_37a54c;
        }
    }
    ctx->pc = 0x37A514u;
    // 0x37a514: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x37A514u;
    {
        const bool branch_taken_0x37a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A514u;
        // 0x37a518: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a514) {
            ctx->pc = 0x37A5E0u;
            goto label_37a5e0;
        }
    }
    ctx->pc = 0x37A51Cu;
label_37a51c:
    // 0x37a51c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37a51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a520: 0xc0dd414  jal         func_375050
    ctx->pc = 0x37A520u;
    SET_GPR_U32(ctx, 31, 0x37A528u);
    ctx->pc = 0x37A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A520u;
    // 0x37a524: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375050u, 0x37A520u, 0x37A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A528u;
label_37a528:
    // 0x37a528: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x37A528u;
    {
        const bool branch_taken_0x37a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A528u;
        // 0x37a52c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a528) {
            ctx->pc = 0x37A5DCu;
            goto label_37a5dc;
        }
    }
    ctx->pc = 0x37A530u;
label_37a530:
    // 0x37a530: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x37a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37a534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37a534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a538: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37a538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37a53c: 0xc0e1c9c  jal         func_387270
    ctx->pc = 0x37A53Cu;
    SET_GPR_U32(ctx, 31, 0x37A544u);
    ctx->pc = 0x37A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A53Cu;
    // 0x37a540: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387270u, 0x37A53Cu, 0x37A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A544u;
label_37a544:
    // 0x37a544: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x37A544u;
    {
        const bool branch_taken_0x37a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A544u;
        // 0x37a548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a544) {
            ctx->pc = 0x37A5DCu;
            goto label_37a5dc;
        }
    }
    ctx->pc = 0x37A54Cu;
label_37a54c:
    // 0x37a54c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37a550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a554: 0xc0dd766  jal         func_375D98
    ctx->pc = 0x37A554u;
    SET_GPR_U32(ctx, 31, 0x37A55Cu);
    ctx->pc = 0x37A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A554u;
    // 0x37a558: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375D98u, 0x37A554u, 0x37A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A55Cu;
label_37a55c:
    // 0x37a55c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x37A55Cu;
    {
        const bool branch_taken_0x37a55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A55Cu;
        // 0x37a560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a55c) {
            ctx->pc = 0x37A5DCu;
            goto label_37a5dc;
        }
    }
    ctx->pc = 0x37A564u;
label_37a564:
    // 0x37a564: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x37a564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x37a568: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x37A568u;
    {
        const bool branch_taken_0x37a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A568u;
        // 0x37a56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a568) {
            ctx->pc = 0x37A5D8u;
            goto label_37a5d8;
        }
    }
    ctx->pc = 0x37A570u;
    // 0x37a570: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x37a570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x37a574: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37A574u;
    {
        const bool branch_taken_0x37a574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A574u;
        // 0x37a578: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a574) {
            ctx->pc = 0x37A5B8u;
            goto label_37a5b8;
        }
    }
    ctx->pc = 0x37A57Cu;
    // 0x37a57c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A57Cu;
    {
        const bool branch_taken_0x37a57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a57c) {
            ctx->pc = 0x37A580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A57Cu;
            // 0x37a580: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A594u;
            goto label_37a594;
        }
    }
    ctx->pc = 0x37A584u;
    // 0x37a584: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A584u;
    {
        const bool branch_taken_0x37a584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A584u;
        // 0x37a588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a584) {
            ctx->pc = 0x37A5A4u;
            goto label_37a5a4;
        }
    }
    ctx->pc = 0x37A58Cu;
    // 0x37a58c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37A58Cu;
    {
        const bool branch_taken_0x37a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A58Cu;
        // 0x37a590: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a58c) {
            ctx->pc = 0x37A5E0u;
            goto label_37a5e0;
        }
    }
    ctx->pc = 0x37A594u;
label_37a594:
    // 0x37a594: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37A594u;
    {
        const bool branch_taken_0x37a594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A594u;
        // 0x37a598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a594) {
            ctx->pc = 0x37A5C8u;
            goto label_37a5c8;
        }
    }
    ctx->pc = 0x37A59Cu;
    // 0x37a59c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37A59Cu;
    {
        const bool branch_taken_0x37a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A59Cu;
        // 0x37a5a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a59c) {
            ctx->pc = 0x37A5E0u;
            goto label_37a5e0;
        }
    }
    ctx->pc = 0x37A5A4u;
label_37a5a4:
    // 0x37a5a4: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x37a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x37a5a8: 0xc0dd37e  jal         func_374DF8
    ctx->pc = 0x37A5A8u;
    SET_GPR_U32(ctx, 31, 0x37A5B0u);
    ctx->pc = 0x37A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A5A8u;
    // 0x37a5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374DF8u, 0x37A5A8u, 0x37A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A5B0u;
label_37a5b0:
    // 0x37a5b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37A5B0u;
    {
        const bool branch_taken_0x37a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5B0u;
        // 0x37a5b4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a5b0) {
            ctx->pc = 0x37A5D0u;
            goto label_37a5d0;
        }
    }
    ctx->pc = 0x37A5B8u;
label_37a5b8:
    // 0x37a5b8: 0xc0de97c  jal         func_37A5F0
    ctx->pc = 0x37A5B8u;
    SET_GPR_U32(ctx, 31, 0x37A5C0u);
    ctx->pc = 0x37A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A5B8u;
    // 0x37a5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A5F0u, 0x37A5B8u, 0x37A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A5C0u;
label_37a5c0:
    // 0x37a5c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37A5C0u;
    {
        const bool branch_taken_0x37a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5C0u;
        // 0x37a5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a5c0) {
            ctx->pc = 0x37A5DCu;
            goto label_37a5dc;
        }
    }
    ctx->pc = 0x37A5C8u;
label_37a5c8:
    // 0x37a5c8: 0xc0de99a  jal         func_37A668
    ctx->pc = 0x37A5C8u;
    SET_GPR_U32(ctx, 31, 0x37A5D0u);
    ctx->pc = 0x37A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A5C8u;
    // 0x37a5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A668u, 0x37A5C8u, 0x37A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A5D0u;
label_37a5d0:
    // 0x37a5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37A5D0u;
    {
        const bool branch_taken_0x37a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5D0u;
        // 0x37a5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a5d0) {
            ctx->pc = 0x37A5DCu;
            goto label_37a5dc;
        }
    }
    ctx->pc = 0x37A5D8u;
label_37a5d8:
    // 0x37a5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a5dc:
    // 0x37a5dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37a5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37a5e0:
    // 0x37a5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x37A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5E4u;
        // 0x37a5e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A5ECu;
    // 0x37a5ec: 0x0  nop
    ctx->pc = 0x37a5ecu;
    // NOP
    ctx->pc = 0x37a5f0u;
}
