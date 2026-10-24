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
// Function: SetPrintSaveDataSub__6cMcSysiiiiiiScUsUs
// Address: 0x7c80d8 - 0x7c8370
void SetPrintSaveDataSub__6cMcSysiiiiiiScUsUs_0x7c80d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPrintSaveDataSub__6cMcSysiiiiiiScUsUs_0x7c80d8");
#endif

    switch (ctx->pc) {
        case 0x7c8190u: goto label_7c8190;
        case 0x7c81a0u: goto label_7c81a0;
        case 0x7c81bcu: goto label_7c81bc;
        case 0x7c81ccu: goto label_7c81cc;
        case 0x7c81dcu: goto label_7c81dc;
        case 0x7c81f0u: goto label_7c81f0;
        case 0x7c8204u: goto label_7c8204;
        case 0x7c8214u: goto label_7c8214;
        case 0x7c8228u: goto label_7c8228;
        case 0x7c8260u: goto label_7c8260;
        case 0x7c827cu: goto label_7c827c;
        case 0x7c828cu: goto label_7c828c;
        case 0x7c829cu: goto label_7c829c;
        case 0x7c82acu: goto label_7c82ac;
        case 0x7c82d0u: goto label_7c82d0;
        case 0x7c82f0u: goto label_7c82f0;
        case 0x7c8308u: goto label_7c8308;
        case 0x7c8318u: goto label_7c8318;
        case 0x7c8330u: goto label_7c8330;
        case 0x7c8340u: goto label_7c8340;
        default: break;
    }

    ctx->pc = 0x7c80d8u;

    // 0x7c80d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x7c80d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x7c80dc: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x7c80dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x7c80e0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7c80e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x7c80e4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c80e8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7c80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x7c80ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x7c80ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c80f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x7c80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x7c80f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7c80f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c80f8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x7c80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x7c80fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7c80fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8100: 0x97a200d0  lhu         $v0, 0xD0($sp)
    ctx->pc = 0x7c8100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x7c8104: 0xbf603  sra         $fp, $t3, 24
    ctx->pc = 0x7c8104u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 11), 24));
    // 0x7c8108: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7c8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x7c810c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x7c810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x7c8110: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x7c8110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8114: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x7c8114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x7c8118: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x7c8118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x7c811c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x7c811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x7c8120: 0x2aa02  srl         $s5, $v0, 8
    ctx->pc = 0x7c8120u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x7c8124: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x7c8124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x7c8128: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x7c8128u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7c812c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7c812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7c8130: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c8130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c8134: 0x246b0ef0  addiu       $t3, $v1, 0xEF0
    ctx->pc = 0x7c8134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 3824));
    // 0x7c8138: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x7c8138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7c813c: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x7c813cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7c8140: 0x8d650008  lw          $a1, 0x8($t3)
    ctx->pc = 0x7c8140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x7c8144: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x7c8144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c8148: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x7c8148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c814c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x7c814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x7c8150: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x7c8150u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8154: 0x97a300d8  lhu         $v1, 0xD8($sp)
    ctx->pc = 0x7c8154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x7c8158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c815c: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x7c815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x7c8160: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7c8160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8164: 0xafaa0024  sw          $t2, 0x24($sp)
    ctx->pc = 0x7c8164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
    // 0x7c8168: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x7c8168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x7c816c: 0x244b0f00  addiu       $t3, $v0, 0xF00
    ctx->pc = 0x7c816cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
    // 0x7c8170: 0x69670007  ldl         $a3, 0x7($t3)
    ctx->pc = 0x7c8170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7c8174: 0x6d670000  ldr         $a3, 0x0($t3)
    ctx->pc = 0x7c8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7c8178: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x7c8178u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7D0F08u));
    // 0x7c817c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x7c817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c8180: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x7c8180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c8184: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x7c8184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x7c8188: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C8188u;
    SET_GPR_U32(ctx, 31, 0x7C8190u);
    ctx->pc = 0x7C818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8188u;
    // 0x7c818c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8188u, 0x7C8190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8190u;
label_7c8190:
    // 0x7c8190: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x7c8190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x7c8194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8198: 0xc1f223a  jal         func_7C88E8
    ctx->pc = 0x7C8198u;
    SET_GPR_U32(ctx, 31, 0x7C81A0u);
    ctx->pc = 0x7C819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8198u;
    // 0x7c819c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88E8u, 0x7C8198u, 0x7C81A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C81A0u;
label_7c81a0:
    // 0x7c81a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c81a4: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7C81A4u;
    {
        const bool branch_taken_0x7c81a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C81A4u;
        // 0x7c81a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c81a4) {
            ctx->pc = 0x7C81F8u;
            goto label_7c81f8;
        }
    }
    ctx->pc = 0x7C81ACu;
    // 0x7c81ac: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x7c81acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x7c81b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c81b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c81b4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C81B4u;
    SET_GPR_U32(ctx, 31, 0x7C81BCu);
    ctx->pc = 0x7C81B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C81B4u;
    // 0x7c81b8: 0x26700060  addiu       $s0, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C81B4u, 0x7C81BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C81BCu;
label_7c81bc:
    // 0x7c81bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c81bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c81c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c81c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c81c4: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C81C4u;
    SET_GPR_U32(ctx, 31, 0x7C81CCu);
    ctx->pc = 0x7C81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C81C4u;
    // 0x7c81c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C81C4u, 0x7C81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C81CCu;
label_7c81cc:
    // 0x7c81cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c81ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c81d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c81d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c81d4: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C81D4u;
    SET_GPR_U32(ctx, 31, 0x7C81DCu);
    ctx->pc = 0x7C81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C81D4u;
    // 0x7c81d8: 0x24062006  addiu       $a2, $zero, 0x2006 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8198));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C81D4u, 0x7C81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C81DCu;
label_7c81dc:
    // 0x7c81dc: 0x3c06801e  lui         $a2, 0x801E
    ctx->pc = 0x7c81dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32798 << 16));
    // 0x7c81e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c81e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c81e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7c81e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c81e8: 0xc1f2296  jal         func_7C8A58
    ctx->pc = 0x7C81E8u;
    SET_GPR_U32(ctx, 31, 0x7C81F0u);
    ctx->pc = 0x7C81ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C81E8u;
    // 0x7c81ec: 0x34c61c1e  ori         $a2, $a2, 0x1C1E (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)7198);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8A58u, 0x7C81E8u, 0x7C81F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C81F0u;
label_7c81f0:
    // 0x7c81f0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x7C81F0u;
    {
        const bool branch_taken_0x7c81f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C81F0u;
        // 0x7c81f4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c81f0) {
            ctx->pc = 0x7C8344u;
            goto label_7c8344;
        }
    }
    ctx->pc = 0x7C81F8u;
label_7c81f8:
    // 0x7c81f8: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x7c81f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x7c81fc: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C81FCu;
    SET_GPR_U32(ctx, 31, 0x7C8204u);
    ctx->pc = 0x7C8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C81FCu;
    // 0x7c8200: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C81FCu, 0x7C8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8204u;
label_7c8204:
    // 0x7c8204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8208: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x7c8208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x7c820c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C820Cu;
    SET_GPR_U32(ctx, 31, 0x7C8214u);
    ctx->pc = 0x7C8210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C820Cu;
    // 0x7c8210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C820Cu, 0x7C8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8214u;
label_7c8214:
    // 0x7c8214: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x7c8214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x7c8218: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7c8218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c821c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c821cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8220: 0xc1f2296  jal         func_7C8A58
    ctx->pc = 0x7C8220u;
    SET_GPR_U32(ctx, 31, 0x7C8228u);
    ctx->pc = 0x7C8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8220u;
    // 0x7c8224: 0x34c68080  ori         $a2, $a2, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8A58u, 0x7C8220u, 0x7C8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8228u;
label_7c8228:
    // 0x7c8228: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C8228u;
    {
        const bool branch_taken_0x7c8228 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8228u;
        // 0x7c822c: 0x26a2ffff  addiu       $v0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8228) {
            ctx->pc = 0x7C8240u;
            goto label_7c8240;
        }
    }
    ctx->pc = 0x7C8230u;
    // 0x7c8230: 0x26c32023  addiu       $v1, $s6, 0x2023
    ctx->pc = 0x7c8230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 8227));
    // 0x7c8234: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7c8234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7c8238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C8238u;
    {
        const bool branch_taken_0x7c8238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8238u;
        // 0x7c823c: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8238) {
            ctx->pc = 0x7C8244u;
            goto label_7c8244;
        }
    }
    ctx->pc = 0x7C8240u;
label_7c8240:
    // 0x7c8240: 0x240320a3  addiu       $v1, $zero, 0x20A3
    ctx->pc = 0x7c8240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
label_7c8244:
    // 0x7c8244: 0x2c6220a4  sltiu       $v0, $v1, 0x20A4
    ctx->pc = 0x7c8244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8356) ? 1 : 0);
    // 0x7c8248: 0x26700018  addiu       $s0, $s3, 0x18
    ctx->pc = 0x7c8248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x7c824c: 0x240620a3  addiu       $a2, $zero, 0x20A3
    ctx->pc = 0x7c824cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
    // 0x7c8250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c8250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8254: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x7c8254u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x7c8258: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C8258u;
    SET_GPR_U32(ctx, 31, 0x7C8260u);
    ctx->pc = 0x7C825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8258u;
    // 0x7c825c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C8258u, 0x7C8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8260u;
label_7c8260:
    // 0x7c8260: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x7c8260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x7c8264: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x7c8264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x7c8268: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7c8268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7c826c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c826cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8274: 0xc1f22a6  jal         func_7C8A98
    ctx->pc = 0x7C8274u;
    SET_GPR_U32(ctx, 31, 0x7C827Cu);
    ctx->pc = 0x7C8278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8274u;
    // 0x7c8278: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8A98u, 0x7C8274u, 0x7C827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C827Cu;
label_7c827c:
    // 0x7c827c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x7c827cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8284: 0xc1f223a  jal         func_7C88E8
    ctx->pc = 0x7C8284u;
    SET_GPR_U32(ctx, 31, 0x7C828Cu);
    ctx->pc = 0x7C8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8284u;
    // 0x7c8288: 0x26650024  addiu       $a1, $s3, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88E8u, 0x7C8284u, 0x7C828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C828Cu;
label_7c828c:
    // 0x7c828c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x7c828cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8294: 0xc1f223a  jal         func_7C88E8
    ctx->pc = 0x7C8294u;
    SET_GPR_U32(ctx, 31, 0x7C829Cu);
    ctx->pc = 0x7C8298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8294u;
    // 0x7c8298: 0x26650028  addiu       $a1, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88E8u, 0x7C8294u, 0x7C829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C829Cu;
label_7c829c:
    // 0x7c829c: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x7c829cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x7c82a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c82a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c82a4: 0xc1f223a  jal         func_7C88E8
    ctx->pc = 0x7C82A4u;
    SET_GPR_U32(ctx, 31, 0x7C82ACu);
    ctx->pc = 0x7C82A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C82A4u;
    // 0x7c82a8: 0x2665002c  addiu       $a1, $s3, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88E8u, 0x7C82A4u, 0x7C82ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C82ACu;
label_7c82ac:
    // 0x7c82ac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7c82acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7c82b0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x7c82b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7c82b4: 0x8c627a0c  lw          $v0, 0x7A0C($v1)
    ctx->pc = 0x7c82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x7c82b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c82b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c82bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c82bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c82c0: 0x27c62000  addiu       $a2, $fp, 0x2000
    ctx->pc = 0x7c82c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 8192));
    // 0x7c82c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7c82c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7c82c8: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C82C8u;
    SET_GPR_U32(ctx, 31, 0x7C82D0u);
    ctx->pc = 0x7C82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C82C8u;
    // 0x7c82cc: 0x3a2800b  movn        $s0, $sp, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C82C8u, 0x7C82D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C82D0u;
label_7c82d0:
    // 0x7c82d0: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x7c82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x7c82d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7c82d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7c82d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7c82d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7c82dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x7c82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x7c82e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c82e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c82e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x7c82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7c82e8: 0xc1f22a6  jal         func_7C8A98
    ctx->pc = 0x7C82E8u;
    SET_GPR_U32(ctx, 31, 0x7C82F0u);
    ctx->pc = 0x7C82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C82E8u;
    // 0x7c82ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8A98u, 0x7C82E8u, 0x7C82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C82F0u;
label_7c82f0:
    // 0x7c82f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x7c82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x7c82f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7C82F4u;
    {
        const bool branch_taken_0x7c82f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C82F4u;
        // 0x7c82f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c82f4) {
            ctx->pc = 0x7C8320u;
            goto label_7c8320;
        }
    }
    ctx->pc = 0x7C82FCu;
    // 0x7c82fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c82fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8300: 0xc1f223a  jal         func_7C88E8
    ctx->pc = 0x7C8300u;
    SET_GPR_U32(ctx, 31, 0x7C8308u);
    ctx->pc = 0x7C8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8300u;
    // 0x7c8304: 0x26650034  addiu       $a1, $s3, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C88E8u, 0x7C8300u, 0x7C8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8308u;
label_7c8308:
    // 0x7c8308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c830c: 0x26650076  addiu       $a1, $s3, 0x76
    ctx->pc = 0x7c830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 118));
    // 0x7c8310: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C8310u;
    SET_GPR_U32(ctx, 31, 0x7C8318u);
    ctx->pc = 0x7C8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8310u;
    // 0x7c8314: 0x240620a6  addiu       $a2, $zero, 0x20A6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8358));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C8310u, 0x7C8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8318u;
label_7c8318:
    // 0x7c8318: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C8318u;
    {
        const bool branch_taken_0x7c8318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8318u;
        // 0x7c831c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8318) {
            ctx->pc = 0x7C8344u;
            goto label_7c8344;
        }
    }
    ctx->pc = 0x7C8320u;
label_7c8320:
    // 0x7c8320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8324: 0x26650034  addiu       $a1, $s3, 0x34
    ctx->pc = 0x7c8324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x7c8328: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C8328u;
    SET_GPR_U32(ctx, 31, 0x7C8330u);
    ctx->pc = 0x7C832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8328u;
    // 0x7c832c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C8328u, 0x7C8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8330u;
label_7c8330:
    // 0x7c8330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8334: 0x26650076  addiu       $a1, $s3, 0x76
    ctx->pc = 0x7c8334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 118));
    // 0x7c8338: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C8338u;
    SET_GPR_U32(ctx, 31, 0x7C8340u);
    ctx->pc = 0x7C833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8338u;
    // 0x7c833c: 0x24062005  addiu       $a2, $zero, 0x2005 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C8338u, 0x7C8340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8340u;
label_7c8340:
    // 0x7c8340: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x7c8340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_7c8344:
    // 0x7c8344: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x7c8344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7c8348: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x7c8348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7c834c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x7c834cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7c8350: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x7c8350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7c8354: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x7c8354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7c8358: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x7c8358u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c835c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x7c835cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c8360: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x7c8360u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c8364: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7c8364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8368: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8368u;
        // 0x7c836c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8370u;
}
} // namespace gh_mcport
