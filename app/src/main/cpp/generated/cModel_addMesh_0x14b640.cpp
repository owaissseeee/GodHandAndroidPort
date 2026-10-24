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

// Function: cModel_addMesh
// Address: 0x14b640 - 0x14b6f8
void cModel_addMesh_0x14b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_addMesh_0x14b640");
#endif

    switch (ctx->pc) {
        case 0x14b664u: goto label_14b664;
        case 0x14b67cu: goto label_14b67c;
        case 0x14b6dcu: goto label_14b6dc;
        default: break;
    }

    ctx->pc = 0x14b640u;

    // 0x14b640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b644: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b64c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b650: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14b654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14b654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b65c: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x14B65Cu;
    SET_GPR_U32(ctx, 31, 0x14B664u);
    ctx->pc = 0x14B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B65Cu;
    // 0x14b660: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x14B65Cu, 0x14B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B664u;
label_14b664:
    // 0x14b664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B664u;
    {
        const bool branch_taken_0x14b664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B664u;
        // 0x14b668: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b664) {
            ctx->pc = 0x14B674u;
            goto label_14b674;
        }
    }
    ctx->pc = 0x14B66Cu;
    // 0x14b66c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B66Cu;
    {
        const bool branch_taken_0x14b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B66Cu;
        // 0x14b670: 0xae11025c  sw          $s1, 0x25C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b66c) {
            ctx->pc = 0x14B680u;
            goto label_14b680;
        }
    }
    ctx->pc = 0x14B674u;
label_14b674:
    // 0x14b674: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14B674u;
    SET_GPR_U32(ctx, 31, 0x14B67Cu);
    ctx->pc = 0x14B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B674u;
    // 0x14b678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14B674u, 0x14B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B67Cu;
label_14b67c:
    // 0x14b67c: 0xac510404  sw          $s1, 0x404($v0)
    ctx->pc = 0x14b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 17));
label_14b680:
    // 0x14b680: 0x920202b1  lbu         $v0, 0x2B1($s0)
    ctx->pc = 0x14b680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 689)));
    // 0x14b684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b68c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14b68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14b690: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x14B690u;
    {
        const bool branch_taken_0x14b690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B690u;
        // 0x14b694: 0xa20202b1  sb          $v0, 0x2B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 689), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b690) {
            ctx->pc = 0x14B6D0u;
            goto label_14b6d0;
        }
    }
    ctx->pc = 0x14B698u;
    // 0x14b698: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x14b698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14b69c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x14b69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14b6a0: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x14b6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14b6a4: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x14b6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14b6a8: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x14b6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14b6ac: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x14b6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14b6b0: 0xb2020267  sdl         $v0, 0x267($s0)
    ctx->pc = 0x14b6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b6b4: 0xb6020260  sdr         $v0, 0x260($s0)
    ctx->pc = 0x14b6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b6b8: 0xb203026f  sdl         $v1, 0x26F($s0)
    ctx->pc = 0x14b6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 623); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b6bc: 0xb6030268  sdr         $v1, 0x268($s0)
    ctx->pc = 0x14b6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b6c0: 0xb2040277  sdl         $a0, 0x277($s0)
    ctx->pc = 0x14b6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 631); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b6c4: 0xb6040270  sdr         $a0, 0x270($s0)
    ctx->pc = 0x14b6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 624); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b6c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B6C8u;
    {
        const bool branch_taken_0x14b6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6C8u;
        // 0x14b6cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6c8) {
            ctx->pc = 0x14B6E0u;
            goto label_14b6e0;
        }
    }
    ctx->pc = 0x14B6D0u;
label_14b6d0:
    // 0x14b6d0: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x14b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x14b6d4: 0xc07e474  jal         func_1F91D0
    ctx->pc = 0x14B6D4u;
    SET_GPR_U32(ctx, 31, 0x14B6DCu);
    ctx->pc = 0x14B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B6D4u;
    // 0x14b6d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F91D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F91D0u, 0x14B6D4u, 0x14B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6DCu;
label_14b6dc:
    // 0x14b6dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14b6e0:
    // 0x14b6e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b6e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14b6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6ECu;
        // 0x14b6f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B6F4u;
    // 0x14b6f4: 0x0  nop
    ctx->pc = 0x14b6f4u;
    // NOP
    ctx->pc = 0x14b6f8u;
}
