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

// Function: func_00140638
// Address: 0x140638 - 0x140718
void func_00140638_0x140638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00140638_0x140638");
#endif

    switch (ctx->pc) {
        case 0x14069cu: goto label_14069c;
        case 0x1406c0u: goto label_1406c0;
        case 0x1406ccu: goto label_1406cc;
        case 0x1406fcu: goto label_1406fc;
        default: break;
    }

    ctx->pc = 0x140638u;

    // 0x140638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14063c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x140640: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x140640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x140644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140648: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x140648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14064c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140650: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x140650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x140654: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x140654u;
    {
        const bool branch_taken_0x140654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140654u;
        // 0x140658: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140654) {
            ctx->pc = 0x1406FCu;
            goto label_1406fc;
        }
    }
    ctx->pc = 0x14065Cu;
    // 0x14065c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x14065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x140660: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x140660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x140664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x140664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x140668: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x140668u;
    {
        const bool branch_taken_0x140668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140668u;
        // 0x14066c: 0x24647a24  addiu       $a0, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140668) {
            ctx->pc = 0x1406FCu;
            goto label_1406fc;
        }
    }
    ctx->pc = 0x140670u;
    // 0x140670: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x140670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x140674: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x140674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x140678: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x140678u;
    {
        const bool branch_taken_0x140678 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x14067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140678u;
        // 0x14067c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140678) {
            ctx->pc = 0x140700u;
            goto label_140700;
        }
    }
    ctx->pc = 0x140680u;
    // 0x140680: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x140680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x140684: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x140688: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x140688u;
    {
        const bool branch_taken_0x140688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140688u;
        // 0x14068c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140688) {
            ctx->pc = 0x140704u;
            goto label_140704;
        }
    }
    ctx->pc = 0x140690u;
    // 0x140690: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x140694: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x140694u;
    SET_GPR_U32(ctx, 31, 0x14069Cu);
    ctx->pc = 0x140698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140694u;
    // 0x140698: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x140694u, 0x14069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14069Cu;
label_14069c:
    // 0x14069c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14069Cu;
    {
        const bool branch_taken_0x14069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1406A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14069Cu;
        // 0x1406a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14069c) {
            ctx->pc = 0x140700u;
            goto label_140700;
        }
    }
    ctx->pc = 0x1406A4u;
    // 0x1406a4: 0x92420358  lbu         $v0, 0x358($s2)
    ctx->pc = 0x1406a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 856)));
    // 0x1406a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1406A8u;
    {
        const bool branch_taken_0x1406a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406A8u;
        // 0x1406ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406a8) {
            ctx->pc = 0x1406F4u;
            goto label_1406f4;
        }
    }
    ctx->pc = 0x1406B0u;
    // 0x1406b0: 0x8e42035c  lw          $v0, 0x35C($s2)
    ctx->pc = 0x1406b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 860)));
    // 0x1406b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1406B4u;
    {
        const bool branch_taken_0x1406b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406B4u;
        // 0x1406b8: 0x2651035c  addiu       $s1, $s2, 0x35C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406b4) {
            ctx->pc = 0x1406F4u;
            goto label_1406f4;
        }
    }
    ctx->pc = 0x1406BCu;
    // 0x1406bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1406c0:
    // 0x1406c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1406c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1406c4: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1406C4u;
    SET_GPR_U32(ctx, 31, 0x1406CCu);
    ctx->pc = 0x1406C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406C4u;
    // 0x1406c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1406C4u, 0x1406CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406CCu;
label_1406cc:
    // 0x1406cc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1406d0: 0x92420358  lbu         $v0, 0x358($s2)
    ctx->pc = 0x1406d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 856)));
    // 0x1406d4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1406d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1406d8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1406d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1406dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1406DCu;
    {
        const bool branch_taken_0x1406dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406DCu;
        // 0x1406e0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406dc) {
            ctx->pc = 0x1406F4u;
            goto label_1406f4;
        }
    }
    ctx->pc = 0x1406E4u;
    // 0x1406e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1406e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1406e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1406e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1406ec: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1406ECu;
    {
        const bool branch_taken_0x1406ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1406F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406ECu;
        // 0x1406f0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406ec) {
            ctx->pc = 0x1406C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1406c0;
        }
    }
    ctx->pc = 0x1406F4u;
label_1406f4:
    // 0x1406f4: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1406F4u;
    SET_GPR_U32(ctx, 31, 0x1406FCu);
    ctx->pc = 0x1406F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406F4u;
    // 0x1406f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1406F4u, 0x1406FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406FCu;
label_1406fc:
    // 0x1406fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1406fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_140700:
    // 0x140700: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x140700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140704:
    // 0x140704: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x140704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14070c: 0x3e00008  jr          $ra
    ctx->pc = 0x14070Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14070Cu;
        // 0x140710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14070Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140714u;
    // 0x140714: 0x0  nop
    ctx->pc = 0x140714u;
    // NOP
    ctx->pc = 0x140718u;
}
