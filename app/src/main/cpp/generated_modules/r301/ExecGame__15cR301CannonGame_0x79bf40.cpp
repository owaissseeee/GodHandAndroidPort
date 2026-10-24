#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ExecGame__15cR301CannonGame
// Address: 0x79bf40 - 0x79c358
void ExecGame__15cR301CannonGame_0x79bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecGame__15cR301CannonGame_0x79bf40");
#endif

    switch (ctx->pc) {
        case 0x79bf60u: goto label_79bf60;
        case 0x79bfe0u: goto label_79bfe0;
        case 0x79c090u: goto label_79c090;
        case 0x79c09cu: goto label_79c09c;
        case 0x79c0f0u: goto label_79c0f0;
        case 0x79c15cu: goto label_79c15c;
        case 0x79c19cu: goto label_79c19c;
        case 0x79c1f8u: goto label_79c1f8;
        case 0x79c23cu: goto label_79c23c;
        case 0x79c278u: goto label_79c278;
        case 0x79c2a4u: goto label_79c2a4;
        case 0x79c2a8u: goto label_79c2a8;
        case 0x79c2bcu: goto label_79c2bc;
        case 0x79c2ccu: goto label_79c2cc;
        case 0x79c2f8u: goto label_79c2f8;
        case 0x79c300u: goto label_79c300;
        case 0x79c320u: goto label_79c320;
        case 0x79c33cu: goto label_79c33c;
        default: break;
    }

    ctx->pc = 0x79bf40u;

    // 0x79bf40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79bf44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79bf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79bf48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79bf4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79bf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79bf50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79bf54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79bf58: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79BF58u;
    SET_GPR_U32(ctx, 31, 0x79BF60u);
    ctx->pc = 0x79BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF58u;
    // 0x79bf5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BF58u, 0x79BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF60u;
label_79bf60:
    // 0x79bf60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79bf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf64: 0x126000f5  beqz        $s3, . + 4 + (0xF5 << 2)
    ctx->pc = 0x79BF64u;
    {
        const bool branch_taken_0x79bf64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF64u;
        // 0x79bf68: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf64) {
            ctx->pc = 0x79C33Cu;
            goto label_79c33c;
        }
    }
    ctx->pc = 0x79BF6Cu;
    // 0x79bf6c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x79bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x79bf70: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x79bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79bf74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bf78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79bf7c: 0x10850011  beq         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x79BF7Cu;
    {
        const bool branch_taken_0x79bf7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF7Cu;
        // 0x79bf80: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf7c) {
            ctx->pc = 0x79BFC4u;
            goto label_79bfc4;
        }
    }
    ctx->pc = 0x79BF84u;
    // 0x79bf84: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x79bf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79bf88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BF88u;
    {
        const bool branch_taken_0x79bf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF88u;
        // 0x79bf8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf88) {
            ctx->pc = 0x79BFA0u;
            goto label_79bfa0;
        }
    }
    ctx->pc = 0x79BF90u;
    // 0x79bf90: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BF90u;
    {
        const bool branch_taken_0x79bf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF90u;
        // 0x79bf94: 0x2632004c  addiu       $s2, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf90) {
            ctx->pc = 0x79BFB8u;
            goto label_79bfb8;
        }
    }
    ctx->pc = 0x79BF98u;
    // 0x79bf98: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x79BF98u;
    {
        const bool branch_taken_0x79bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF98u;
        // 0x79bf9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf98) {
            ctx->pc = 0x79C158u;
            goto label_79c158;
        }
    }
    ctx->pc = 0x79BFA0u;
label_79bfa0:
    // 0x79bfa0: 0x1082002c  beq         $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x79BFA0u;
    {
        const bool branch_taken_0x79bfa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x79BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFA0u;
        // 0x79bfa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfa0) {
            ctx->pc = 0x79C054u;
            goto label_79c054;
        }
    }
    ctx->pc = 0x79BFA8u;
    // 0x79bfa8: 0x1082004c  beq         $a0, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x79BFA8u;
    {
        const bool branch_taken_0x79bfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x79BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFA8u;
        // 0x79bfac: 0x2632004c  addiu       $s2, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfa8) {
            ctx->pc = 0x79C0DCu;
            goto label_79c0dc;
        }
    }
    ctx->pc = 0x79BFB0u;
    // 0x79bfb0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x79BFB0u;
    {
        const bool branch_taken_0x79bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFB0u;
        // 0x79bfb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfb0) {
            ctx->pc = 0x79C158u;
            goto label_79c158;
        }
    }
    ctx->pc = 0x79BFB8u;
label_79bfb8:
    // 0x79bfb8: 0xae250098  sw          $a1, 0x98($s1)
    ctx->pc = 0x79bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 5));
    // 0x79bfbc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x79BFBCu;
    {
        const bool branch_taken_0x79bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFBCu;
        // 0x79bfc0: 0xa2200450  sb          $zero, 0x450($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1104), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfbc) {
            ctx->pc = 0x79C150u;
            goto label_79c150;
        }
    }
    ctx->pc = 0x79BFC4u;
label_79bfc4:
    // 0x79bfc4: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x79bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x79bfc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BFC8u;
    {
        const bool branch_taken_0x79bfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFC8u;
        // 0x79bfcc: 0x2632004c  addiu       $s2, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfc8) {
            ctx->pc = 0x79BFD8u;
            goto label_79bfd8;
        }
    }
    ctx->pc = 0x79BFD0u;
    // 0x79bfd0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x79BFD0u;
    {
        const bool branch_taken_0x79bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFD0u;
        // 0x79bfd4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfd0) {
            ctx->pc = 0x79C14Cu;
            goto label_79c14c;
        }
    }
    ctx->pc = 0x79BFD8u;
label_79bfd8:
    // 0x79bfd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79bfdc: 0x2622005c  addiu       $v0, $s1, 0x5C
    ctx->pc = 0x79bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_79bfe0:
    // 0x79bfe0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x79bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x79bfe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79bfe8: 0x0  nop
    ctx->pc = 0x79bfe8u;
    // NOP
    // 0x79bfec: 0x0  nop
    ctx->pc = 0x79bfecu;
    // NOP
    // 0x79bff0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79BFF0u;
    {
        const bool branch_taken_0x79bff0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x79BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFF0u;
        // 0x79bff4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bff0) {
            ctx->pc = 0x79BFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bfe0;
        }
    }
    ctx->pc = 0x79BFF8u;
    // 0x79bff8: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x79bff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x79bffc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c000: 0x2447dee8  addiu       $a3, $v0, -0x2118
    ctx->pc = 0x79c000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958824));
    // 0x79c004: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x79c004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79c008: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x79c008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79c00c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x79c00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79c010: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x79c010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79c014: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x79c014u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x79DEF8u));
    // 0x79c018: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x79c018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c01c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x79c01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c020: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x79c020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c024: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x79c024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c028: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x79c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x79c02c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79c030: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x79c030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x79c034: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x79c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79c038: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x79c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x79c03c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c044: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x79c044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x79c048: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x79c048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x79c04c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x79C04Cu;
    {
        const bool branch_taken_0x79c04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C04Cu;
        // 0x79c050: 0xae23007c  sw          $v1, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c04c) {
            ctx->pc = 0x79C150u;
            goto label_79c150;
        }
    }
    ctx->pc = 0x79C054u;
label_79c054:
    // 0x79c054: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x79c054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x79c058: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x79c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x79c05c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x79c05cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79c060: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x79C060u;
    {
        const bool branch_taken_0x79c060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C060u;
        // 0x79c064: 0x2632004c  addiu       $s2, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c060) {
            ctx->pc = 0x79C150u;
            goto label_79c150;
        }
    }
    ctx->pc = 0x79C068u;
    // 0x79c068: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x79c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x79c06c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C06Cu;
    {
        const bool branch_taken_0x79c06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C06Cu;
        // 0x79c070: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c06c) {
            ctx->pc = 0x79C07Cu;
            goto label_79c07c;
        }
    }
    ctx->pc = 0x79C074u;
    // 0x79c074: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x79C074u;
    {
        const bool branch_taken_0x79c074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C074u;
        // 0x79c078: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c074) {
            ctx->pc = 0x79C150u;
            goto label_79c150;
        }
    }
    ctx->pc = 0x79C07Cu;
label_79c07c:
    // 0x79c07c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x79c07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c080: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x79C080u;
    {
        const bool branch_taken_0x79c080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C080u;
        // 0x79c084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c080) {
            ctx->pc = 0x79C158u;
            goto label_79c158;
        }
    }
    ctx->pc = 0x79C088u;
    // 0x79c088: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x79C088u;
    SET_GPR_U32(ctx, 31, 0x79C090u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x79C088u, 0x79C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C090u;
label_79c090:
    // 0x79c090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c094: 0xc1e71f8  jal         func_79C7E0
    ctx->pc = 0x79C094u;
    SET_GPR_U32(ctx, 31, 0x79C09Cu);
    ctx->pc = 0x79C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C094u;
    // 0x79c098: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C7E0u, 0x79C094u, 0x79C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C09Cu;
label_79c09c:
    // 0x79c09c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x79c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x79c0a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79c0a4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79c0a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79c0ac: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x79c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x79c0b0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x79c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x79c0b4: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x79c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x79c0b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c0bc: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x79c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
    // 0x79c0c0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x79c0c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c0c4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x79C0C4u;
    {
        const bool branch_taken_0x79c0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0C4u;
        // 0x79c0c8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0c4) {
            ctx->pc = 0x79C150u;
            goto label_79c150;
        }
    }
    ctx->pc = 0x79C0CCu;
    // 0x79c0cc: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x79c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79c0d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c0d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x79C0D4u;
    {
        const bool branch_taken_0x79c0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0D4u;
        // 0x79c0d8: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0d4) {
            ctx->pc = 0x79C150u;
            goto label_79c150;
        }
    }
    ctx->pc = 0x79C0DCu;
label_79c0dc:
    // 0x79c0dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79c0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c0e8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x79c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x79c0ec: 0x0  nop
    ctx->pc = 0x79c0ecu;
    // NOP
label_79c0f0:
    // 0x79c0f0: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x79c0f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c0f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79c0f8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x79c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x79c0fc: 0x28a30005  slti        $v1, $a1, 0x5
    ctx->pc = 0x79c0fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c104: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C104u;
    {
        const bool branch_taken_0x79c104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C104u;
        // 0x79c108: 0xe2300b  movn        $a2, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c104) {
            ctx->pc = 0x79C0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c0f0;
        }
    }
    ctx->pc = 0x79C10Cu;
    // 0x79c10c: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x79C10Cu;
    {
        const bool branch_taken_0x79c10c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C10Cu;
        // 0x79c110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c10c) {
            ctx->pc = 0x79C158u;
            goto label_79c158;
        }
    }
    ctx->pc = 0x79C114u;
    // 0x79c114: 0x9222008d  lbu         $v0, 0x8D($s1)
    ctx->pc = 0x79c114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 141)));
    // 0x79c118: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x79c118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x79c11c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79c120: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x79c120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79c124: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C124u;
    {
        const bool branch_taken_0x79c124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C124u;
        // 0x79c128: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c124) {
            ctx->pc = 0x79C148u;
            goto label_79c148;
        }
    }
    ctx->pc = 0x79C12Cu;
    // 0x79c12c: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x79c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x79c130: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x79c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x79c134: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C134u;
    {
        const bool branch_taken_0x79c134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C134u;
        // 0x79c138: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c134) {
            ctx->pc = 0x79C148u;
            goto label_79c148;
        }
    }
    ctx->pc = 0x79C13Cu;
    // 0x79c13c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x79c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79c140: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x79c140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x79c144: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x79c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_79c148:
    // 0x79c148: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x79c148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_79c14c:
    // 0x79c14c: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x79c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_79c150:
    // 0x79c150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79c150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c154: 0x0  nop
    ctx->pc = 0x79c154u;
    // NOP
label_79c158:
    // 0x79c158: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x79c158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_79c15c:
    // 0x79c15c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79c15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c160: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x79c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x79c164: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79c164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79c168: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x79C168u;
    {
        const bool branch_taken_0x79c168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C168u;
        // 0x79c16c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c168) {
            ctx->pc = 0x79C280u;
            goto label_79c280;
        }
    }
    ctx->pc = 0x79C170u;
    // 0x79c170: 0x9ca30004  lwu         $v1, 0x4($a1)
    ctx->pc = 0x79c170u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c174: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x79c174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x79c178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c17c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x79C17Cu;
    {
        const bool branch_taken_0x79c17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c17c) {
            ctx->pc = 0x79C280u;
            goto label_79c280;
        }
    }
    ctx->pc = 0x79C184u;
    // 0x79c184: 0x310bb  dsra        $v0, $v1, 2
    ctx->pc = 0x79c184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
    // 0x79c188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c18c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x79C18Cu;
    {
        const bool branch_taken_0x79c18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C18Cu;
        // 0x79c190: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c18c) {
            ctx->pc = 0x79C284u;
            goto label_79c284;
        }
    }
    ctx->pc = 0x79C194u;
    // 0x79c194: 0xc1e726c  jal         func_79C9B0
    ctx->pc = 0x79C194u;
    SET_GPR_U32(ctx, 31, 0x79C19Cu);
    ctx->pc = 0x79C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C194u;
    // 0x79c198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C9B0u, 0x79C194u, 0x79C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C19Cu;
label_79c19c:
    // 0x79c19c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79c19cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c1a0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79c1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c1a4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x79C1A4u;
    {
        const bool branch_taken_0x79c1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1A4u;
        // 0x79c1a8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1a4) {
            ctx->pc = 0x79C28Cu;
            goto label_79c28c;
        }
    }
    ctx->pc = 0x79C1ACu;
    // 0x79c1ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79c1b0: 0x2442df00  addiu       $v0, $v0, -0x2100
    ctx->pc = 0x79c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
    // 0x79c1b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79c1b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c1bc: 0x800008  jr          $a0
    ctx->pc = 0x79C1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79C1C4u: goto label_79c1c4;
            case 0x79C1D0u: goto label_79c1d0;
            case 0x79C200u: goto label_79c200;
            case 0x79C214u: goto label_79c214;
            case 0x79C23Cu: goto label_79c23c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C1BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79C1C4u;
label_79c1c4:
    // 0x79c1c4: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x79c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x79c1c8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79C1C8u;
    {
        const bool branch_taken_0x79c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1C8u;
        // 0x79c1cc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1c8) {
            ctx->pc = 0x79C254u;
            goto label_79c254;
        }
    }
    ctx->pc = 0x79C1D0u;
label_79c1d0:
    // 0x79c1d0: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x79c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x79c1d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79c1d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c1dc: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x79C1DCu;
    {
        const bool branch_taken_0x79c1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1DCu;
        // 0x79c1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1dc) {
            ctx->pc = 0x79C28Cu;
            goto label_79c28c;
        }
    }
    ctx->pc = 0x79C1E4u;
    // 0x79c1e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x79c1e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79c1e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79c1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79c1ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79c1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79c1f0: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x79C1F0u;
    SET_GPR_U32(ctx, 31, 0x79C1F8u);
    ctx->pc = 0x79C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1F0u;
    // 0x79c1f4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x79C1F0u, 0x79C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1F8u;
label_79c1f8:
    // 0x79c1f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x79C1F8u;
    {
        const bool branch_taken_0x79c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1F8u;
        // 0x79c1fc: 0x8662054a  lh          $v0, 0x54A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1f8) {
            ctx->pc = 0x79C290u;
            goto label_79c290;
        }
    }
    ctx->pc = 0x79C200u;
label_79c200:
    // 0x79c200: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x79c200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x79c204: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x79c204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79c208: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c20c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79C20Cu;
    {
        const bool branch_taken_0x79c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C20Cu;
        // 0x79c210: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c20c) {
            ctx->pc = 0x79C24Cu;
            goto label_79c24c;
        }
    }
    ctx->pc = 0x79C214u;
label_79c214:
    // 0x79c214: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79c214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x79c218: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79c218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c21c: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x79c21cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x79c220: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79c220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79c224: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79c224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c228: 0x240600b2  addiu       $a2, $zero, 0xB2
    ctx->pc = 0x79c228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x79c22c: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x79c22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x79c230: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c234: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79C234u;
    SET_GPR_U32(ctx, 31, 0x79C23Cu);
    ctx->pc = 0x79C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C234u;
    // 0x79c238: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79C234u, 0x79C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C23Cu;
label_79c23c:
    // 0x79c23c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x79c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x79c240: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x79c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79c244: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c248: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x79c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_79c24c:
    // 0x79c24c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79c250: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79c250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_79c254:
    // 0x79c254: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79c254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c258: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79C258u;
    {
        const bool branch_taken_0x79c258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C258u;
        // 0x79c25c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c258) {
            ctx->pc = 0x79C28Cu;
            goto label_79c28c;
        }
    }
    ctx->pc = 0x79C260u;
    // 0x79c260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79c260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79c264: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79c264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79c268: 0x0  nop
    ctx->pc = 0x79c268u;
    // NOP
    // 0x79c26c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79c26cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79c270: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x79C270u;
    SET_GPR_U32(ctx, 31, 0x79C278u);
    ctx->pc = 0x79C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C270u;
    // 0x79c274: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x79C270u, 0x79C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C278u;
label_79c278:
    // 0x79c278: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79C278u;
    {
        const bool branch_taken_0x79c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C278u;
        // 0x79c27c: 0x8662054a  lh          $v0, 0x54A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c278) {
            ctx->pc = 0x79C290u;
            goto label_79c290;
        }
    }
    ctx->pc = 0x79C280u;
label_79c280:
    // 0x79c280: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x79c280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_79c284:
    // 0x79c284: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x79C284u;
    {
        const bool branch_taken_0x79c284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C284u;
        // 0x79c288: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c284) {
            ctx->pc = 0x79C15Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c15c;
        }
    }
    ctx->pc = 0x79C28Cu;
label_79c28c:
    // 0x79c28c: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x79c28cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
label_79c290:
    // 0x79c290: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x79C290u;
    {
        const bool branch_taken_0x79c290 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C290u;
        // 0x79c294: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c290) {
            ctx->pc = 0x79C340u;
            goto label_79c340;
        }
    }
    ctx->pc = 0x79C298u;
    // 0x79c298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c29c: 0xc1e7362  jal         func_79CD88
    ctx->pc = 0x79C29Cu;
    SET_GPR_U32(ctx, 31, 0x79C2A4u);
    ctx->pc = 0x79C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C29Cu;
    // 0x79c2a0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CD88u, 0x79C29Cu, 0x79C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2A4u;
label_79c2a4:
    // 0x79c2a4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x79c2a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79c2a8:
    // 0x79c2a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79c2ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C2ACu;
    {
        const bool branch_taken_0x79c2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2ACu;
        // 0x79c2b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2ac) {
            ctx->pc = 0x79C2BCu;
            goto label_79c2bc;
        }
    }
    ctx->pc = 0x79C2B4u;
    // 0x79c2b4: 0xc1e6cc8  jal         func_79B320
    ctx->pc = 0x79C2B4u;
    SET_GPR_U32(ctx, 31, 0x79C2BCu);
    ctx->pc = 0x79B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B320u, 0x79C2B4u, 0x79C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2BCu;
label_79c2bc:
    // 0x79c2bc: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C2BCu;
    {
        const bool branch_taken_0x79c2bc = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2BCu;
        // 0x79c2c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2bc) {
            ctx->pc = 0x79C2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c2a8;
        }
    }
    ctx->pc = 0x79C2C4u;
    // 0x79c2c4: 0xc1e7164  jal         func_79C590
    ctx->pc = 0x79C2C4u;
    SET_GPR_U32(ctx, 31, 0x79C2CCu);
    ctx->pc = 0x79C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2C4u;
    // 0x79c2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C590u, 0x79C2C4u, 0x79C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2CCu;
label_79c2cc:
    // 0x79c2cc: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x79c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79c2d0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x79c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x79c2d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79c2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c2d8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79C2D8u;
    {
        const bool branch_taken_0x79c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2D8u;
        // 0x79c2dc: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2d8) {
            ctx->pc = 0x79C334u;
            goto label_79c334;
        }
    }
    ctx->pc = 0x79C2E0u;
    // 0x79c2e0: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x79c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x79c2e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79c2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79c2ec: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x79c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x79c2f0: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x79c2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x79c2f4: 0x0  nop
    ctx->pc = 0x79c2f4u;
    // NOP
label_79c2f8:
    // 0x79c2f8: 0xc1e725e  jal         func_79C978
    ctx->pc = 0x79C2F8u;
    SET_GPR_U32(ctx, 31, 0x79C300u);
    ctx->pc = 0x79C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2F8u;
    // 0x79c2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C978u, 0x79C2F8u, 0x79C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C300u;
label_79c300:
    // 0x79c300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79c300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79c304: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x79c304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c308: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79C308u;
    {
        const bool branch_taken_0x79c308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C308u;
        // 0x79c30c: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c308) {
            ctx->pc = 0x79C2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c2f8;
        }
    }
    ctx->pc = 0x79C310u;
    // 0x79c310: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79c310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c314: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c318: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79C318u;
    SET_GPR_U32(ctx, 31, 0x79C320u);
    ctx->pc = 0x79C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C318u;
    // 0x79c31c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79C318u, 0x79C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C320u;
label_79c320:
    // 0x79c320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c324: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x79c324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x79c328: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x79c328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x79c32c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79C32Cu;
    {
        const bool branch_taken_0x79c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C32Cu;
        // 0x79c330: 0xae200098  sw          $zero, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c32c) {
            ctx->pc = 0x79C33Cu;
            goto label_79c33c;
        }
    }
    ctx->pc = 0x79C334u;
label_79c334:
    // 0x79c334: 0xc1e72fc  jal         func_79CBF0
    ctx->pc = 0x79C334u;
    SET_GPR_U32(ctx, 31, 0x79C33Cu);
    ctx->pc = 0x79C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C334u;
    // 0x79c338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CBF0u, 0x79C334u, 0x79C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C33Cu;
label_79c33c:
    // 0x79c33c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79c33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79c340:
    // 0x79c340: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79c340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c344: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79c344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79c348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c34c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c350: 0x3e00008  jr          $ra
    ctx->pc = 0x79C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C350u;
        // 0x79c354: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C358u;
}
} // namespace gh_r301
