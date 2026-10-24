#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcSetFileInfo
// Address: 0x7ce6d8 - 0x7ce8a8
void sceMcSetFileInfo_0x7ce6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcSetFileInfo_0x7ce6d8");
#endif

    switch (ctx->pc) {
        case 0x7ce738u: goto label_7ce738;
        case 0x7ce75cu: goto label_7ce75c;
        case 0x7ce818u: goto label_7ce818;
        case 0x7ce824u: goto label_7ce824;
        case 0x7ce854u: goto label_7ce854;
        case 0x7ce864u: goto label_7ce864;
        default: break;
    }

    ctx->pc = 0x7ce6d8u;

    // 0x7ce6d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7ce6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7ce6dc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce6e0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x7ce6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x7ce6e4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7ce6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x7ce6e8: 0x24571980  addiu       $s7, $v0, 0x1980
    ctx->pc = 0x7ce6e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7ce6ec: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7ce6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7ce6f0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x7ce6f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce6f4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ce6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7ce6f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7ce6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce6fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ce6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ce700: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7ce700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce704: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ce704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ce708: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x7ce708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce70c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x7ce70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x7ce710: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7ce710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7ce714: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce718: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x7ce718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ce71c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE71Cu;
    {
        const bool branch_taken_0x7ce71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE71Cu;
        // 0x7ce720: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce71c) {
            ctx->pc = 0x7CE72Cu;
            goto label_7ce72c;
        }
    }
    ctx->pc = 0x7CE724u;
    // 0x7ce724: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x7CE724u;
    {
        const bool branch_taken_0x7ce724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE724u;
        // 0x7ce728: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce724) {
            ctx->pc = 0x7CE878u;
            goto label_7ce878;
        }
    }
    ctx->pc = 0x7CE72Cu;
label_7ce72c:
    // 0x7ce72c: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7ce72cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
    // 0x7ce730: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CE730u;
    SET_GPR_U32(ctx, 31, 0x7CE738u);
    ctx->pc = 0x7CE734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE730u;
    // 0x7ce734: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CE730u, 0x7CE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE738u;
label_7ce738:
    // 0x7ce738: 0x440004f  bltz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x7CE738u;
    {
        const bool branch_taken_0x7ce738 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE738u;
        // 0x7ce73c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce738) {
            ctx->pc = 0x7CE878u;
            goto label_7ce878;
        }
    }
    ctx->pc = 0x7CE740u;
    // 0x7ce740: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE740u;
    {
        const bool branch_taken_0x7ce740 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ce740) {
            ctx->pc = 0x7CE754u;
            goto label_7ce754;
        }
    }
    ctx->pc = 0x7CE748u;
    // 0x7ce748: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x7ce748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7ce74c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE74Cu;
    {
        const bool branch_taken_0x7ce74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE74Cu;
        // 0x7ce750: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce74c) {
            ctx->pc = 0x7CE764u;
            goto label_7ce764;
        }
    }
    ctx->pc = 0x7CE754u;
label_7ce754:
    // 0x7ce754: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE754u;
    SET_GPR_U32(ctx, 31, 0x7CE75Cu);
    ctx->pc = 0x7CE758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE754u;
    // 0x7ce758: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE754u, 0x7CE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE75Cu;
label_7ce75c:
    // 0x7ce75c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x7CE75Cu;
    {
        const bool branch_taken_0x7ce75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE75Cu;
        // 0x7ce760: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce75c) {
            ctx->pc = 0x7CE878u;
            goto label_7ce878;
        }
    }
    ctx->pc = 0x7CE764u;
label_7ce764:
    // 0x7ce764: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x7ce764u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x7ce768: 0x24501a30  addiu       $s0, $v0, 0x1A30
    ctx->pc = 0x7ce768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x7ce76c: 0xac541a30  sw          $s4, 0x1A30($v0)
    ctx->pc = 0x7ce76cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6704), GPR_U32(ctx, 20));
    // 0x7ce770: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x7ce770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x7ce774: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce778: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x7ce778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x7ce77c: 0x244319c0  addiu       $v1, $v0, 0x19C0
    ctx->pc = 0x7ce77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x7ce780: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7ce780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce784: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x7ce784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x7ce788: 0x244919c0  addiu       $t1, $v0, 0x19C0
    ctx->pc = 0x7ce788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x7ce78c: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x7ce78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7ce790: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x7ce790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7ce794: 0x6ac7000f  ldl         $a3, 0xF($s6)
    ctx->pc = 0x7ce794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7ce798: 0x6ec70008  ldr         $a3, 0x8($s6)
    ctx->pc = 0x7ce798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7ce79c: 0x6ac80017  ldl         $t0, 0x17($s6)
    ctx->pc = 0x7ce79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7ce7a0: 0x6ec80010  ldr         $t0, 0x10($s6)
    ctx->pc = 0x7ce7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7ce7a4: 0xb1260007  sdl         $a2, 0x7($t1)
    ctx->pc = 0x7ce7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7a8: 0xb5260000  sdr         $a2, 0x0($t1)
    ctx->pc = 0x7ce7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7ac: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x7ce7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7b0: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x7ce7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7b4: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x7ce7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7b8: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x7ce7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7bc: 0x6ac6001f  ldl         $a2, 0x1F($s6)
    ctx->pc = 0x7ce7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7ce7c0: 0x6ec60018  ldr         $a2, 0x18($s6)
    ctx->pc = 0x7ce7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7ce7c4: 0x6ac70027  ldl         $a3, 0x27($s6)
    ctx->pc = 0x7ce7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7ce7c8: 0x6ec70020  ldr         $a3, 0x20($s6)
    ctx->pc = 0x7ce7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7ce7cc: 0x6ac8002f  ldl         $t0, 0x2F($s6)
    ctx->pc = 0x7ce7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7ce7d0: 0x6ec80028  ldr         $t0, 0x28($s6)
    ctx->pc = 0x7ce7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7ce7d4: 0xb126001f  sdl         $a2, 0x1F($t1)
    ctx->pc = 0x7ce7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7d8: 0xb5260018  sdr         $a2, 0x18($t1)
    ctx->pc = 0x7ce7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7dc: 0xb1270027  sdl         $a3, 0x27($t1)
    ctx->pc = 0x7ce7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7e0: 0xb5270020  sdr         $a3, 0x20($t1)
    ctx->pc = 0x7ce7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7e4: 0xb128002f  sdl         $t0, 0x2F($t1)
    ctx->pc = 0x7ce7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7e8: 0xb5280028  sdr         $t0, 0x28($t1)
    ctx->pc = 0x7ce7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce7ec: 0x6ac60037  ldl         $a2, 0x37($s6)
    ctx->pc = 0x7ce7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7ce7f0: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x7ce7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7ce7f4: 0x6ac7003f  ldl         $a3, 0x3F($s6)
    ctx->pc = 0x7ce7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7ce7f8: 0x6ec70038  ldr         $a3, 0x38($s6)
    ctx->pc = 0x7ce7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7ce7fc: 0xb1260037  sdl         $a2, 0x37($t1)
    ctx->pc = 0x7ce7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce800: 0xb5260030  sdr         $a2, 0x30($t1)
    ctx->pc = 0x7ce800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce804: 0xb127003f  sdl         $a3, 0x3F($t1)
    ctx->pc = 0x7ce804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce808: 0xb5270038  sdr         $a3, 0x38($t1)
    ctx->pc = 0x7ce808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7ce80c: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x7ce80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x7ce810: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CE810u;
    SET_GPR_U32(ctx, 31, 0x7CE818u);
    ctx->pc = 0x7CE814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE810u;
    // 0x7ce814: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CE810u, 0x7CE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE818u;
label_7ce818:
    // 0x7ce818: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x7ce818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ce81c: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x7CE81Cu;
    SET_GPR_U32(ctx, 31, 0x7CE824u);
    ctx->pc = 0x7CE820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE81Cu;
    // 0x7ce820: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x7CE81Cu, 0x7CE824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE824u;
label_7ce824:
    // 0x7ce824: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce828: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce828u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce82c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x7ce82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce830: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7ce830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce834: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce838: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ce838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ce83c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ce83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ce840: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x7ce840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x7ce844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce848: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x7ce848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x7ce84c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE84Cu;
    SET_GPR_U32(ctx, 31, 0x7CE854u);
    ctx->pc = 0x7CE850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE84Cu;
    // 0x7ce850: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE84Cu, 0x7CE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE854u;
label_7ce854:
    // 0x7ce854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE854u;
    {
        const bool branch_taken_0x7ce854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE854u;
        // 0x7ce858: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce854) {
            ctx->pc = 0x7CE86Cu;
            goto label_7ce86c;
        }
    }
    ctx->pc = 0x7CE85Cu;
    // 0x7ce85c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE85Cu;
    SET_GPR_U32(ctx, 31, 0x7CE864u);
    ctx->pc = 0x7CE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE85Cu;
    // 0x7ce860: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE85Cu, 0x7CE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE864u;
label_7ce864:
    // 0x7ce864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE864u;
    {
        const bool branch_taken_0x7ce864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE864u;
        // 0x7ce868: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce864) {
            ctx->pc = 0x7CE878u;
            goto label_7ce878;
        }
    }
    ctx->pc = 0x7CE86Cu;
label_7ce86c:
    // 0x7ce86c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce870: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce878:
    // 0x7ce878: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x7ce878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ce87c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x7ce87cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ce880: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7ce880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ce884: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7ce884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ce888: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7ce888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ce88c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ce88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce890: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce894: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce898: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce89c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE89Cu;
        // 0x7ce8a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE8A4u;
    // 0x7ce8a4: 0x0  nop
    ctx->pc = 0x7ce8a4u;
    // NOP
    ctx->pc = 0x7ce8a8u;
}
} // namespace gh_mcport
