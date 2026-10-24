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

// Function: func_00331110
// Address: 0x331110 - 0x331200
void func_00331110_0x331110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331110_0x331110");
#endif

    switch (ctx->pc) {
        case 0x331154u: goto label_331154;
        case 0x33115cu: goto label_33115c;
        case 0x331168u: goto label_331168;
        case 0x33117cu: goto label_33117c;
        case 0x3311d0u: goto label_3311d0;
        default: break;
    }

    ctx->pc = 0x331110u;

    // 0x331110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331118: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x331118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33111c: 0x24041200  addiu       $a0, $zero, 0x1200
    ctx->pc = 0x33111cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x331120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331128: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x331128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33112c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x331130: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x331130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331134: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x331134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x331138: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x331138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33113c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x331140: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x331140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331144: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x331144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x331148: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x331148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x33114c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33114Cu;
    SET_GPR_U32(ctx, 31, 0x331154u);
    ctx->pc = 0x331150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33114Cu;
    // 0x331150: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33114Cu, 0x331154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331154u;
label_331154:
    // 0x331154: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x331154u;
    SET_GPR_U32(ctx, 31, 0x33115Cu);
    ctx->pc = 0x331158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331154u;
    // 0x331158: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x331154u, 0x33115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33115Cu;
label_33115c:
    // 0x33115c: 0x24041201  addiu       $a0, $zero, 0x1201
    ctx->pc = 0x33115cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4609));
    // 0x331160: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331160u;
    SET_GPR_U32(ctx, 31, 0x331168u);
    ctx->pc = 0x331164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331160u;
    // 0x331164: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331160u, 0x331168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331168u;
label_331168:
    // 0x331168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33116c: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x33116Cu;
    {
        const bool branch_taken_0x33116c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x331170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33116Cu;
        // 0x331170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33116c) {
            ctx->pc = 0x3311D4u;
            goto label_3311d4;
        }
    }
    ctx->pc = 0x331174u;
    // 0x331174: 0xc0ceda2  jal         func_33B688
    ctx->pc = 0x331174u;
    SET_GPR_U32(ctx, 31, 0x33117Cu);
    ctx->pc = 0x33B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B688u, 0x331174u, 0x33117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33117Cu;
label_33117c:
    // 0x33117c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331180: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x331180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x331184: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x331184u;
    {
        const bool branch_taken_0x331184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331184u;
        // 0x331188: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331184) {
            ctx->pc = 0x33119Cu;
            goto label_33119c;
        }
    }
    ctx->pc = 0x33118Cu;
    // 0x33118c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33118Cu;
    {
        const bool branch_taken_0x33118c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x331190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33118Cu;
        // 0x331190: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33118c) {
            ctx->pc = 0x33119Cu;
            goto label_33119c;
        }
    }
    ctx->pc = 0x331194u;
    // 0x331194: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x331194u;
    {
        const bool branch_taken_0x331194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x331194) {
            ctx->pc = 0x3311C8u;
            goto label_3311c8;
        }
    }
    ctx->pc = 0x33119Cu;
label_33119c:
    // 0x33119c: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x33119cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3311a0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3311a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3311a4: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x3311a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3311a8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x3311a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x3311ac: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x3311acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3311b0: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x3311b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3311b4: 0xaa220017  swl         $v0, 0x17($s1)
    ctx->pc = 0x3311b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3311b8: 0xba220014  swr         $v0, 0x14($s1)
    ctx->pc = 0x3311b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3311bc: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x3311bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x3311c0: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x3311c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x3311c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3311c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3311c8:
    // 0x3311c8: 0xc0cedae  jal         func_33B6B8
    ctx->pc = 0x3311C8u;
    SET_GPR_U32(ctx, 31, 0x3311D0u);
    ctx->pc = 0x33B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6B8u, 0x3311C8u, 0x3311D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311D0u;
label_3311d0:
    // 0x3311d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3311d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3311d4:
    // 0x3311d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3311d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3311d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3311d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3311dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3311dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3311e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3311e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3311e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3311e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3311e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3311e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3311ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3311ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3311f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3311f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3311f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3311F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3311F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3311F4u;
        // 0x3311f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3311F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3311FCu;
    // 0x3311fc: 0x0  nop
    ctx->pc = 0x3311fcu;
    // NOP
    ctx->pc = 0x331200u;
}
