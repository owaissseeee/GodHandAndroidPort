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
// Function: func_0079A400
// Address: 0x79a400 - 0x79a5e0
void func_0079A400_0x79a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A400_0x79a400");
#endif

    switch (ctx->pc) {
        case 0x79a458u: goto label_79a458;
        case 0x79a488u: goto label_79a488;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a500u: goto label_79a500;
        case 0x79a514u: goto label_79a514;
        case 0x79a520u: goto label_79a520;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a548u: goto label_79a548;
        case 0x79a574u: goto label_79a574;
        case 0x79a584u: goto label_79a584;
        case 0x79a590u: goto label_79a590;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5c0u: goto label_79a5c0;
        default: break;
    }

    ctx->pc = 0x79a400u;

    // 0x79a400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a404: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a408: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79a40c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a410: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a414: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79a414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a418: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a41c: 0x2448abe0  addiu       $t0, $v0, -0x5420
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945760));
    // 0x79a420: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79a424: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79a424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a428: 0x8046abe0  lb          $a2, -0x5420($v0)
    ctx->pc = 0x79a428u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79ABE0u));
    // 0x79a42c: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a430: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a434: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79a434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a444: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x79A444u;
    {
        const bool branch_taken_0x79a444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A444u;
        // 0x79a448: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a444) {
            ctx->pc = 0x79A480u;
            goto label_79a480;
        }
    }
    ctx->pc = 0x79A44Cu;
    // 0x79a44c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x79a44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a450: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a454: 0x0  nop
    ctx->pc = 0x79a454u;
    // NOP
label_79a458:
    // 0x79a458: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a45c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a460: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a464: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a468: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a46c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A46Cu;
    {
        const bool branch_taken_0x79a46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A46Cu;
        // 0x79a470: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a46c) {
            ctx->pc = 0x79A480u;
            goto label_79a480;
        }
    }
    ctx->pc = 0x79A474u;
    // 0x79a474: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a478: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A478u;
    {
        const bool branch_taken_0x79a478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a478) {
            ctx->pc = 0x79A47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A478u;
            // 0x79a47c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a458;
        }
    }
    ctx->pc = 0x79A480u;
label_79a480:
    // 0x79a480: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A480u;
    SET_GPR_U32(ctx, 31, 0x79A488u);
    ctx->pc = 0x79A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A480u;
    // 0x79a484: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A480u, 0x79A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A488u;
label_79a488:
    // 0x79a488: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a48c: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x79a490: 0x8202abe8  lb          $v0, -0x5418($s0)
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945768)));
    // 0x79a494: 0x2603abe8  addiu       $v1, $s0, -0x5418
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945768));
    // 0x79a498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a49c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A49Cu;
    {
        const bool branch_taken_0x79a49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A49Cu;
        // 0x79a4a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a49c) {
            ctx->pc = 0x79A4D8u;
            goto label_79a4d8;
        }
    }
    ctx->pc = 0x79A4A4u;
    // 0x79a4a4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4a8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a4ac: 0x0  nop
    ctx->pc = 0x79a4acu;
    // NOP
label_79a4b0:
    // 0x79a4b0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a4b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a4b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a4bc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a4c0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a4c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a4c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A4C4u;
    {
        const bool branch_taken_0x79a4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C4u;
        // 0x79a4c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4c4) {
            ctx->pc = 0x79A4D8u;
            goto label_79a4d8;
        }
    }
    ctx->pc = 0x79A4CCu;
    // 0x79a4cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a4d0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A4D0u;
    {
        const bool branch_taken_0x79a4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a4d0) {
            ctx->pc = 0x79A4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4D0u;
            // 0x79a4d4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4b0;
        }
    }
    ctx->pc = 0x79A4D8u;
label_79a4d8:
    // 0x79a4d8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A4D8u;
    SET_GPR_U32(ctx, 31, 0x79A4E0u);
    ctx->pc = 0x79A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D8u;
    // 0x79a4dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A4D8u, 0x79A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E0u;
label_79a4e0:
    // 0x79a4e0: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x79A4E0u;
    {
        const bool branch_taken_0x79a4e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E0u;
        // 0x79a4e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4e0) {
            ctx->pc = 0x79A5C0u;
            goto label_79a5c0;
        }
    }
    ctx->pc = 0x79A4E8u;
    // 0x79a4e8: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x79A4E8u;
    {
        const bool branch_taken_0x79a4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E8u;
        // 0x79a4ec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4e8) {
            ctx->pc = 0x79A5C4u;
            goto label_79a5c4;
        }
    }
    ctx->pc = 0x79A4F0u;
    // 0x79a4f0: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x79A4F0u;
    {
        const bool branch_taken_0x79a4f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F0u;
        // 0x79a4f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f0) {
            ctx->pc = 0x79A57Cu;
            goto label_79a57c;
        }
    }
    ctx->pc = 0x79A4F8u;
    // 0x79a4f8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A4F8u;
    SET_GPR_U32(ctx, 31, 0x79A500u);
    ctx->pc = 0x79A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4F8u;
    // 0x79a4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A4F8u, 0x79A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A500u;
label_79a500:
    // 0x79a500: 0x2e700001  sltiu       $s0, $s3, 0x1
    ctx->pc = 0x79a500u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79a504: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a50c: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A50Cu;
    SET_GPR_U32(ctx, 31, 0x79A514u);
    ctx->pc = 0x79A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A50Cu;
    // 0x79a510: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A50Cu, 0x79A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A514u;
label_79a514:
    // 0x79a514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a518: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A518u;
    SET_GPR_U32(ctx, 31, 0x79A520u);
    ctx->pc = 0x79A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A518u;
    // 0x79a51c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A518u, 0x79A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A520u;
label_79a520:
    // 0x79a520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a524: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A524u;
    SET_GPR_U32(ctx, 31, 0x79A52Cu);
    ctx->pc = 0x79A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A524u;
    // 0x79a528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A524u, 0x79A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A52Cu;
label_79a52c:
    // 0x79a52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a534: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A534u;
    SET_GPR_U32(ctx, 31, 0x79A53Cu);
    ctx->pc = 0x79A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A534u;
    // 0x79a538: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A534u, 0x79A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A53Cu;
label_79a53c:
    // 0x79a53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a540: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A540u;
    SET_GPR_U32(ctx, 31, 0x79A548u);
    ctx->pc = 0x79A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A540u;
    // 0x79a544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A540u, 0x79A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A548u;
label_79a548:
    // 0x79a548: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A548u;
    {
        const bool branch_taken_0x79a548 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A548u;
        // 0x79a54c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a548) {
            ctx->pc = 0x79A5C0u;
            goto label_79a5c0;
        }
    }
    ctx->pc = 0x79A550u;
    // 0x79a550: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79a550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a554: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a558: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a55c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a560: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a564: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a568: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a56c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79A56Cu;
    SET_GPR_U32(ctx, 31, 0x79A574u);
    ctx->pc = 0x79A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A56Cu;
    // 0x79a570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79A56Cu, 0x79A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A574u;
label_79a574:
    // 0x79a574: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79A574u;
    {
        const bool branch_taken_0x79a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A574u;
        // 0x79a578: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a574) {
            ctx->pc = 0x79A5C4u;
            goto label_79a5c4;
        }
    }
    ctx->pc = 0x79A57Cu;
label_79a57c:
    // 0x79a57c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A57Cu;
    SET_GPR_U32(ctx, 31, 0x79A584u);
    ctx->pc = 0x79A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A57Cu;
    // 0x79a580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A57Cu, 0x79A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A584u;
label_79a584:
    // 0x79a584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a588: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A588u;
    SET_GPR_U32(ctx, 31, 0x79A590u);
    ctx->pc = 0x79A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A588u;
    // 0x79a58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A588u, 0x79A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A590u;
label_79a590:
    // 0x79a590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a594: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A594u;
    SET_GPR_U32(ctx, 31, 0x79A59Cu);
    ctx->pc = 0x79A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A594u;
    // 0x79a598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A594u, 0x79A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A59Cu;
label_79a59c:
    // 0x79a59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5a0: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A5A0u;
    SET_GPR_U32(ctx, 31, 0x79A5A8u);
    ctx->pc = 0x79A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A0u;
    // 0x79a5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A5A0u, 0x79A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5ac: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A5ACu;
    SET_GPR_U32(ctx, 31, 0x79A5B4u);
    ctx->pc = 0x79A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5ACu;
    // 0x79a5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A5ACu, 0x79A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5B4u;
label_79a5b4:
    // 0x79a5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5b8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A5B8u;
    SET_GPR_U32(ctx, 31, 0x79A5C0u);
    ctx->pc = 0x79A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B8u;
    // 0x79a5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A5B8u, 0x79A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5C0u;
label_79a5c0:
    // 0x79a5c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a5c4:
    // 0x79a5c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a5c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a5cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a5d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a5d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D8u;
        // 0x79a5dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5E0u;
}
} // namespace gh_r304
