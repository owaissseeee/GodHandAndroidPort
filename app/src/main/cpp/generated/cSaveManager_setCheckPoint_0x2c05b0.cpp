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

// Function: cSaveManager_setCheckPoint
// Address: 0x2c05b0 - 0x2c06d0
void cSaveManager_setCheckPoint_0x2c05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSaveManager_setCheckPoint_0x2c05b0");
#endif

    switch (ctx->pc) {
        case 0x2c05e0u: goto label_2c05e0;
        case 0x2c05ecu: goto label_2c05ec;
        case 0x2c05f8u: goto label_2c05f8;
        case 0x2c0628u: goto label_2c0628;
        default: break;
    }

    ctx->pc = 0x2c05b0u;

    // 0x2c05b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c05b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c05b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c05b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c05b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2c05b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2c05bc: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2c05bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2c05c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c05c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c05c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c05c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c05c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c05cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c05ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05d0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c05d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c05d8: 0xc07e6e2  jal         func_1F9B88
    ctx->pc = 0x2C05D8u;
    SET_GPR_U32(ctx, 31, 0x2C05E0u);
    ctx->pc = 0x2C05DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C05D8u;
    // 0x2c05dc: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B88u, 0x2C05D8u, 0x2C05E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C05E0u;
label_2c05e0:
    // 0x2c05e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c05e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05e4: 0xc0c70d4  jal         func_31C350
    ctx->pc = 0x2C05E4u;
    SET_GPR_U32(ctx, 31, 0x2C05ECu);
    ctx->pc = 0x2C05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C05E4u;
    // 0x2c05e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C350u, 0x2C05E4u, 0x2C05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C05ECu;
label_2c05ec:
    // 0x2c05ec: 0x8e029b70  lw          $v0, -0x6490($s0)
    ctx->pc = 0x2c05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c05f0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2c05f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05f4: 0x244414a0  addiu       $a0, $v0, 0x14A0
    ctx->pc = 0x2c05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
label_2c05f8:
    // 0x2c05f8: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2c05f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c05fc: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x2c05fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c0600: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2c0600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2c0604: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x2c0604u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x2c0608: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c0608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c060c: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C060Cu;
    {
        const bool branch_taken_0x2c060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C060Cu;
        // 0x2c0610: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c060c) {
            ctx->pc = 0x2C05F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c05f8;
        }
    }
    ctx->pc = 0x2C0614u;
    // 0x2c0614: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x2c0614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x2c0618: 0x266314a0  addiu       $v1, $s3, 0x14A0
    ctx->pc = 0x2c0618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 5280));
    // 0x2c061c: 0x24459cb8  addiu       $a1, $v0, -0x6348
    ctx->pc = 0x2c061cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941880));
    // 0x2c0620: 0x34029c20  ori         $v0, $zero, 0x9C20
    ctx->pc = 0x2c0620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39968);
    // 0x2c0624: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c0624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2c0628:
    // 0x2c0628: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2c0628u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c062c: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x2c062cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c0630: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x2c0630u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c0634: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x2c0634u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c0638: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2c0638u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2c063c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2c063cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2c0640: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x2c0640u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2c0644: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x2c0644u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2c0648: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c0648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c064c: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C064Cu;
    {
        const bool branch_taken_0x2c064c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C064Cu;
        // 0x2c0650: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c064c) {
            ctx->pc = 0x2C0628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0628;
        }
    }
    ctx->pc = 0x2C0654u;
    // 0x2c0654: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2c0654u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c0658: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x2c0658u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c065c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2c065cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2c0660: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2c0660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2c0664: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2c0664u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2c0668: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2c0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2c066c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2c066cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2c0670: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c0670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0674: 0x24675880  addiu       $a3, $v1, 0x5880
    ctx->pc = 0x2c0674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 22656));
    // 0x2c0678: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2c0678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c067c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2c067cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c0680: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x2c0680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c0684: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x2c0684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c0688: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x2c0688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c068c: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x2c068cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c0690: 0xb04430d7  sdl         $a0, 0x30D7($v0)
    ctx->pc = 0x2c0690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c0694: 0xb44430d0  sdr         $a0, 0x30D0($v0)
    ctx->pc = 0x2c0694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c0698: 0xb04530df  sdl         $a1, 0x30DF($v0)
    ctx->pc = 0x2c0698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c069c: 0xb44530d8  sdr         $a1, 0x30D8($v0)
    ctx->pc = 0x2c069cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c06a0: 0xb04630e7  sdl         $a2, 0x30E7($v0)
    ctx->pc = 0x2c06a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c06a4: 0xb44630e0  sdr         $a2, 0x30E0($v0)
    ctx->pc = 0x2c06a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c06a8: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x2c06a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c06ac: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x2c06acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c06b0: 0xb04430ef  sdl         $a0, 0x30EF($v0)
    ctx->pc = 0x2c06b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c06b4: 0xb44430e8  sdr         $a0, 0x30E8($v0)
    ctx->pc = 0x2c06b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c06b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c06b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c06bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c06bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c06c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2c06c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c06c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c06c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c06c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C06C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06C8u;
        // 0x2c06cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C06C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C06D0u;
}
