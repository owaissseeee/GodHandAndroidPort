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

// Function: cSaveManager_getCheckPoint
// Address: 0x2c06d0 - 0x2c0840
void cSaveManager_getCheckPoint_0x2c06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSaveManager_getCheckPoint_0x2c06d0");
#endif

    switch (ctx->pc) {
        case 0x2c06fcu: goto label_2c06fc;
        case 0x2c072cu: goto label_2c072c;
        case 0x2c07c4u: goto label_2c07c4;
        case 0x2c07ccu: goto label_2c07cc;
        case 0x2c07dcu: goto label_2c07dc;
        case 0x2c07ecu: goto label_2c07ec;
        case 0x2c07fcu: goto label_2c07fc;
        case 0x2c0810u: goto label_2c0810;
        case 0x2c0824u: goto label_2c0824;
        default: break;
    }

    ctx->pc = 0x2c06d0u;

    // 0x2c06d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c06d4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c06d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c06d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c06dc: 0x248614a0  addiu       $a2, $a0, 0x14A0
    ctx->pc = 0x2c06dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5280));
    // 0x2c06e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c06e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c06e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c06e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06e8: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x2c06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x2c06ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c06ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c06f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c06f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c06f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c06f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c06fc:
    // 0x2c06fc: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2c06fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0700: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x2c0700u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c0704: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2c0704u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2c0708: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x2c0708u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x2c070c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c0710: 0x1446fffa  bne         $v0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C0710u;
    {
        const bool branch_taken_0x2c0710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2C0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0710u;
        // 0x2c0714: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0710) {
            ctx->pc = 0x2C06FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c06fc;
        }
    }
    ctx->pc = 0x2C0718u;
    // 0x2c0718: 0x248514a0  addiu       $a1, $a0, 0x14A0
    ctx->pc = 0x2c0718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5280));
    // 0x2c071c: 0x34039c20  ori         $v1, $zero, 0x9C20
    ctx->pc = 0x2c071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39968);
    // 0x2c0720: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x2c0720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x2c0724: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2c0724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c0728: 0x24429cb8  addiu       $v0, $v0, -0x6348
    ctx->pc = 0x2c0728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941880));
label_2c072c:
    // 0x2c072c: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x2c072cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c0730: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x2c0730u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c0734: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x2c0734u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c0738: 0xdca90018  ld          $t1, 0x18($a1)
    ctx->pc = 0x2c0738u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c073c: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x2c073cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x2c0740: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x2c0740u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x2c0744: 0xfc480010  sd          $t0, 0x10($v0)
    ctx->pc = 0x2c0744u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 8));
    // 0x2c0748: 0xfc490018  sd          $t1, 0x18($v0)
    ctx->pc = 0x2c0748u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 9));
    // 0x2c074c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c0750: 0x14a3fff6  bne         $a1, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C0750u;
    {
        const bool branch_taken_0x2c0750 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0750u;
        // 0x2c0754: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0750) {
            ctx->pc = 0x2C072Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c072c;
        }
    }
    ctx->pc = 0x2C0758u;
    // 0x2c0758: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x2c0758u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c075c: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x2c075cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c0760: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x2c0760u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x2c0764: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2c0764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2c0768: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x2c0768u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x2c076c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c0770: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2c0770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2c0774: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2c0774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2c0778: 0x24475880  addiu       $a3, $v0, 0x5880
    ctx->pc = 0x2c0778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
    // 0x2c077c: 0x686430d7  ldl         $a0, 0x30D7($v1)
    ctx->pc = 0x2c077cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c0780: 0x6c6430d0  ldr         $a0, 0x30D0($v1)
    ctx->pc = 0x2c0780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c0784: 0x686530df  ldl         $a1, 0x30DF($v1)
    ctx->pc = 0x2c0784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c0788: 0x6c6530d8  ldr         $a1, 0x30D8($v1)
    ctx->pc = 0x2c0788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c078c: 0x686630e7  ldl         $a2, 0x30E7($v1)
    ctx->pc = 0x2c078cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c0790: 0x6c6630e0  ldr         $a2, 0x30E0($v1)
    ctx->pc = 0x2c0790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c0794: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x2c0794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c0798: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x2c0798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c079c: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x2c079cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c07a0: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x2c07a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c07a4: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x2c07a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c07a8: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x2c07a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c07ac: 0x686430ef  ldl         $a0, 0x30EF($v1)
    ctx->pc = 0x2c07acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c07b0: 0x6c6430e8  ldr         $a0, 0x30E8($v1)
    ctx->pc = 0x2c07b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c07b4: 0xb0e4001f  sdl         $a0, 0x1F($a3)
    ctx->pc = 0x2c07b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c07b8: 0xb4e40018  sdr         $a0, 0x18($a3)
    ctx->pc = 0x2c07b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c07bc: 0xc0c710e  jal         func_31C438
    ctx->pc = 0x2C07BCu;
    SET_GPR_U32(ctx, 31, 0x2C07C4u);
    ctx->pc = 0x2C07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07BCu;
    // 0x2c07c0: 0x261074a0  addiu       $s0, $s0, 0x74A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C438u, 0x2C07BCu, 0x2C07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07C4u;
label_2c07c4:
    // 0x2c07c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C07C4u;
    SET_GPR_U32(ctx, 31, 0x2C07CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C07C4u, 0x2C07CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07CCu;
label_2c07cc:
    // 0x2c07cc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2c07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2c07d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c07d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c07d4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C07D4u;
    SET_GPR_U32(ctx, 31, 0x2C07DCu);
    ctx->pc = 0x2C07D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07D4u;
    // 0x2c07d8: 0xe60005c0  swc1        $f0, 0x5C0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C07D4u, 0x2C07DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07DCu;
label_2c07dc:
    // 0x2c07dc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2c07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2c07e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2c07e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c07e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C07E4u;
    SET_GPR_U32(ctx, 31, 0x2C07ECu);
    ctx->pc = 0x2C07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07E4u;
    // 0x2c07e8: 0xe60005c4  swc1        $f0, 0x5C4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1476), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C07E4u, 0x2C07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07ECu;
label_2c07ec:
    // 0x2c07ec: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2c07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2c07f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c07f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c07f4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C07F4u;
    SET_GPR_U32(ctx, 31, 0x2C07FCu);
    ctx->pc = 0x2C07F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07F4u;
    // 0x2c07f8: 0xe60005c8  swc1        $f0, 0x5C8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1480), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C07F4u, 0x2C07FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07FCu;
label_2c07fc:
    // 0x2c07fc: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x2c07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0800: 0x26449b70  addiu       $a0, $s2, -0x6490
    ctx->pc = 0x2c0800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x2c0804: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c0804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0808: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x2C0808u;
    SET_GPR_U32(ctx, 31, 0x2C0810u);
    ctx->pc = 0x2C080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0808u;
    // 0x2c080c: 0xe60005d0  swc1        $f0, 0x5D0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9CB0u, 0x2C0808u, 0x2C0810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0810u;
label_2c0810:
    // 0x2c0810: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0810u;
    {
        const bool branch_taken_0x2c0810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0810u;
        // 0x2c0814: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0810) {
            ctx->pc = 0x2C0828u;
            goto label_2c0828;
        }
    }
    ctx->pc = 0x2C0818u;
    // 0x2c0818: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c0818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c081c: 0xc07db3e  jal         func_1F6CF8
    ctx->pc = 0x2C081Cu;
    SET_GPR_U32(ctx, 31, 0x2C0824u);
    ctx->pc = 0x2C0820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C081Cu;
    // 0x2c0820: 0x24848240  addiu       $a0, $a0, -0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6CF8u, 0x2C081Cu, 0x2C0824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0824u;
label_2c0824:
    // 0x2c0824: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c0824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0828:
    // 0x2c0828: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c0828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c082c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c082cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0834: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0834u;
        // 0x2c0838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C083Cu;
    // 0x2c083c: 0x0  nop
    ctx->pc = 0x2c083cu;
    // NOP
    ctx->pc = 0x2c0840u;
}
