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

// Function: cSndMemHeap_Alloc
// Address: 0x2cd7c8 - 0x2cd890
void cSndMemHeap_Alloc_0x2cd7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_Alloc_0x2cd7c8");
#endif

    switch (ctx->pc) {
        case 0x2cd7f8u: goto label_2cd7f8;
        case 0x2cd80cu: goto label_2cd80c;
        default: break;
    }

    ctx->pc = 0x2cd7c8u;

    // 0x2cd7c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd7cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cd7d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cd7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cd7d4: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2cd7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2cd7d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cd7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cd7dc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2cd7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2cd7e0: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x2cd7e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2cd7e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cd7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd7e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cd7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd7f0: 0xc0b365a  jal         func_2CD968
    ctx->pc = 0x2CD7F0u;
    SET_GPR_U32(ctx, 31, 0x2CD7F8u);
    ctx->pc = 0x2CD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7F0u;
    // 0x2cd7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD968u, 0x2CD7F0u, 0x2CD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7F8u;
label_2cd7f8:
    // 0x2cd7f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd7fc: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CD7FCu;
    {
        const bool branch_taken_0x2cd7fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7fc) {
            ctx->pc = 0x2CD800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD7FCu;
            // 0x2cd800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD864u;
            goto label_2cd864;
        }
    }
    ctx->pc = 0x2CD804u;
    // 0x2cd804: 0xc0b364c  jal         func_2CD930
    ctx->pc = 0x2CD804u;
    SET_GPR_U32(ctx, 31, 0x2CD80Cu);
    ctx->pc = 0x2CD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD804u;
    // 0x2cd808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD930u, 0x2CD804u, 0x2CD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD80Cu;
label_2cd80c:
    // 0x2cd80c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd810: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CD810u;
    {
        const bool branch_taken_0x2cd810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD810u;
        // 0x2cd814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd810) {
            ctx->pc = 0x2CD864u;
            goto label_2cd864;
        }
    }
    ctx->pc = 0x2CD818u;
    // 0x2cd818: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cd818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cd81c: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x2cd81cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x2cd820: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2cd820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2cd824: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x2cd824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 17));
    // 0x2cd828: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cd828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cd82c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x2cd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x2cd830: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2cd830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2cd834: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2cd834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2cd838: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cd838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cd83c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2cd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2cd840: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2cd840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2cd844: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cd844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cd848: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2cd848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2cd84c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cd850: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CD850u;
    {
        const bool branch_taken_0x2cd850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd850) {
            ctx->pc = 0x2CD854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD850u;
            // 0x2cd854: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD858u;
            goto label_2cd858;
        }
    }
    ctx->pc = 0x2CD858u;
label_2cd858:
    // 0x2cd858: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2cd858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2cd85c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2cd85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2cd860: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2cd860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2cd864:
    // 0x2cd864: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cd864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd868: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cd868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd86c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cd86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd874: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD874u;
        // 0x2cd878: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD87Cu;
    // 0x2cd87c: 0x0  nop
    ctx->pc = 0x2cd87cu;
    // NOP
    // 0x2cd880: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cd880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cd884: 0x0  nop
    ctx->pc = 0x2cd884u;
    // NOP
    // 0x2cd888: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cd888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cd88c: 0x0  nop
    ctx->pc = 0x2cd88cu;
    // NOP
    ctx->pc = 0x2cd890u;
}
