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

// Function: func_001DE5F8
// Address: 0x1de5f8 - 0x1de7c8
void func_001DE5F8_0x1de5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE5F8_0x1de5f8");
#endif

    switch (ctx->pc) {
        case 0x1de680u: goto label_1de680;
        case 0x1de694u: goto label_1de694;
        case 0x1de6b0u: goto label_1de6b0;
        case 0x1de6c0u: goto label_1de6c0;
        case 0x1de6f0u: goto label_1de6f0;
        case 0x1de704u: goto label_1de704;
        case 0x1de720u: goto label_1de720;
        case 0x1de738u: goto label_1de738;
        case 0x1de748u: goto label_1de748;
        case 0x1de758u: goto label_1de758;
        case 0x1de76cu: goto label_1de76c;
        case 0x1de784u: goto label_1de784;
        case 0x1de794u: goto label_1de794;
        case 0x1de7a4u: goto label_1de7a4;
        default: break;
    }

    ctx->pc = 0x1de5f8u;

    // 0x1de5f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1de5fc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1de5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1de600: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1de600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1de604: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x1de604u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1de608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1de60c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1de60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de610: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1de610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1de614: 0x30d400ff  andi        $s4, $a2, 0xFF
    ctx->pc = 0x1de614u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1de618: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1de618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1de61c: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1de61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1de620: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1de620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1de624: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1DE624u;
    {
        const bool branch_taken_0x1de624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE624u;
        // 0x1de628: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de624) {
            ctx->pc = 0x1DE7A4u;
            goto label_1de7a4;
        }
    }
    ctx->pc = 0x1DE62Cu;
    // 0x1de62c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1de62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1de630: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1de630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de634: 0x2446b678  addiu       $a2, $v0, -0x4988
    ctx->pc = 0x1de634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948472));
    // 0x1de638: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1de638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de63c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1de63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de640: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1de640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1de644: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1de644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1de648: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1de648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1de64c: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1de64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1de650: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1de650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de654: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1de654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de658: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1de658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de65c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1de65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de660: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1de660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de664: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1de664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de668: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x1de668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de66c: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x1de66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de670: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1de670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de674: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1de674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de678: 0x26531e68  addiu       $s3, $s2, 0x1E68
    ctx->pc = 0x1de678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 7784));
    // 0x1de67c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1de67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1de680:
    // 0x1de680: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1de680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de68c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE68Cu;
    SET_GPR_U32(ctx, 31, 0x1DE694u);
    ctx->pc = 0x1DE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE68Cu;
    // 0x1de690: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE68Cu, 0x1DE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE694u;
label_1de694:
    // 0x1de694: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1de694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1de698: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DE698u;
    {
        const bool branch_taken_0x1de698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE698u;
        // 0x1de69c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de698) {
            ctx->pc = 0x1DE680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de680;
        }
    }
    ctx->pc = 0x1DE6A0u;
    // 0x1de6a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6a4: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x1de6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1de6a8: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE6A8u;
    SET_GPR_U32(ctx, 31, 0x1DE6B0u);
    ctx->pc = 0x1DE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6A8u;
    // 0x1de6ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE6A8u, 0x1DE6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6B0u;
label_1de6b0:
    // 0x1de6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6b4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1de6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1de6b8: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE6B8u;
    SET_GPR_U32(ctx, 31, 0x1DE6C0u);
    ctx->pc = 0x1DE6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6B8u;
    // 0x1de6bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE6B8u, 0x1DE6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6C0u;
label_1de6c0:
    // 0x1de6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de6c4: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE6C4u;
    {
        const bool branch_taken_0x1de6c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6C4u;
        // 0x1de6c8: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6c4) {
            ctx->pc = 0x1DE6F8u;
            goto label_1de6f8;
        }
    }
    ctx->pc = 0x1DE6CCu;
    // 0x1de6cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE6CCu;
    {
        const bool branch_taken_0x1de6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6CCu;
        // 0x1de6d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6cc) {
            ctx->pc = 0x1DE6E8u;
            goto label_1de6e8;
        }
    }
    ctx->pc = 0x1DE6D4u;
    // 0x1de6d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de6d8: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE6D8u;
    {
        const bool branch_taken_0x1de6d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6D8u;
        // 0x1de6dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6d8) {
            ctx->pc = 0x1DE70Cu;
            goto label_1de70c;
        }
    }
    ctx->pc = 0x1DE6E0u;
    // 0x1de6e0: 0x1282001f  beq         $s4, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DE6E0u;
    {
        const bool branch_taken_0x1de6e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6E0u;
        // 0x1de6e4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6e0) {
            ctx->pc = 0x1DE760u;
            goto label_1de760;
        }
    }
    ctx->pc = 0x1DE6E8u;
label_1de6e8:
    // 0x1de6e8: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE6E8u;
    SET_GPR_U32(ctx, 31, 0x1DE6F0u);
    ctx->pc = 0x1DE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6E8u;
    // 0x1de6ec: 0x2405fe3e  addiu       $a1, $zero, -0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE6E8u, 0x1DE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6F0u;
label_1de6f0:
    // 0x1de6f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1DE6F0u;
    {
        const bool branch_taken_0x1de6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6F0u;
        // 0x1de6f4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6f0) {
            ctx->pc = 0x1DE7A8u;
            goto label_1de7a8;
        }
    }
    ctx->pc = 0x1DE6F8u;
label_1de6f8:
    // 0x1de6f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6fc: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE6FCu;
    SET_GPR_U32(ctx, 31, 0x1DE704u);
    ctx->pc = 0x1DE700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6FCu;
    // 0x1de700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE6FCu, 0x1DE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE704u;
label_1de704:
    // 0x1de704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE704u;
    {
        const bool branch_taken_0x1de704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE704u;
        // 0x1de708: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de704) {
            ctx->pc = 0x1DE724u;
            goto label_1de724;
        }
    }
    ctx->pc = 0x1DE70Cu;
label_1de70c:
    // 0x1de70c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de714: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1de714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1de718: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE718u;
    SET_GPR_U32(ctx, 31, 0x1DE720u);
    ctx->pc = 0x1DE71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE718u;
    // 0x1de71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE718u, 0x1DE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE720u;
label_1de720:
    // 0x1de720: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1de720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1de724:
    // 0x1de724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de728: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1de728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1de72c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de730: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE730u;
    SET_GPR_U32(ctx, 31, 0x1DE738u);
    ctx->pc = 0x1DE734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE730u;
    // 0x1de734: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE730u, 0x1DE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE738u;
label_1de738:
    // 0x1de738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de73c: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1de740: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE740u;
    SET_GPR_U32(ctx, 31, 0x1DE748u);
    ctx->pc = 0x1DE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE740u;
    // 0x1de744: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE740u, 0x1DE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE748u;
label_1de748:
    // 0x1de748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de74c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1de74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1de750: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE750u;
    SET_GPR_U32(ctx, 31, 0x1DE758u);
    ctx->pc = 0x1DE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE750u;
    // 0x1de754: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE750u, 0x1DE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE758u;
label_1de758:
    // 0x1de758: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE758u;
    {
        const bool branch_taken_0x1de758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE758u;
        // 0x1de75c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de758) {
            ctx->pc = 0x1DE7A8u;
            goto label_1de7a8;
        }
    }
    ctx->pc = 0x1DE760u;
label_1de760:
    // 0x1de760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de764: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE764u;
    SET_GPR_U32(ctx, 31, 0x1DE76Cu);
    ctx->pc = 0x1DE768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE764u;
    // 0x1de768: 0x240601c2  addiu       $a2, $zero, 0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE764u, 0x1DE76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE76Cu;
label_1de76c:
    // 0x1de76c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1de770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de774: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1de774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1de778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de77c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE77Cu;
    SET_GPR_U32(ctx, 31, 0x1DE784u);
    ctx->pc = 0x1DE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE77Cu;
    // 0x1de780: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE77Cu, 0x1DE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE784u;
label_1de784:
    // 0x1de784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de788: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x1de788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1de78c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE78Cu;
    SET_GPR_U32(ctx, 31, 0x1DE794u);
    ctx->pc = 0x1DE790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE78Cu;
    // 0x1de790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE78Cu, 0x1DE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE794u;
label_1de794:
    // 0x1de794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de798: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1de798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1de79c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE79Cu;
    SET_GPR_U32(ctx, 31, 0x1DE7A4u);
    ctx->pc = 0x1DE7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE79Cu;
    // 0x1de7a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE79Cu, 0x1DE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7A4u;
label_1de7a4:
    // 0x1de7a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1de7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1de7a8:
    // 0x1de7a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1de7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1de7ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1de7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de7b0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1de7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de7b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1de7b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de7b8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1de7b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1de7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7C0u;
        // 0x1de7c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7C8u;
}
