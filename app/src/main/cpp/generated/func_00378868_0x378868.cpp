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

// Function: func_00378868
// Address: 0x378868 - 0x378aa8
void func_00378868_0x378868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378868_0x378868");
#endif

    switch (ctx->pc) {
        case 0x3788b8u: goto label_3788b8;
        case 0x3788d0u: goto label_3788d0;
        case 0x3788e8u: goto label_3788e8;
        case 0x378900u: goto label_378900;
        case 0x378918u: goto label_378918;
        case 0x378930u: goto label_378930;
        case 0x378948u: goto label_378948;
        case 0x378960u: goto label_378960;
        case 0x378978u: goto label_378978;
        case 0x378990u: goto label_378990;
        case 0x3789b0u: goto label_3789b0;
        case 0x3789d0u: goto label_3789d0;
        case 0x378a00u: goto label_378a00;
        case 0x378a18u: goto label_378a18;
        case 0x378a34u: goto label_378a34;
        case 0x378a50u: goto label_378a50;
        case 0x378a7cu: goto label_378a7c;
        case 0x378a98u: goto label_378a98;
        default: break;
    }

    ctx->pc = 0x378868u;

    // 0x378868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37886c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37886cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x378870: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x378870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x378874: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37887c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37887cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378880: 0x244ab1b8  addiu       $t2, $v0, -0x4E48
    ctx->pc = 0x378880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947256));
    // 0x378884: 0x69430007  ldl         $v1, 0x7($t2)
    ctx->pc = 0x378884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x378888: 0x6d430000  ldr         $v1, 0x0($t2)
    ctx->pc = 0x378888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x37888c: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x37888cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x378890: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x378890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x378894: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x378894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x378898: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x378898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37889c: 0xb3a8000f  sdl         $t0, 0xF($sp)
    ctx->pc = 0x37889cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3788a0: 0xb7a80008  sdr         $t0, 0x8($sp)
    ctx->pc = 0x3788a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3788a4: 0x24e7b1c8  addiu       $a3, $a3, -0x4E38
    ctx->pc = 0x3788a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947272));
    // 0x3788a8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3788a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3788ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3788acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3788b0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3788B0u;
    SET_GPR_U32(ctx, 31, 0x3788B8u);
    ctx->pc = 0x3788B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788B0u;
    // 0x3788b4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3788B0u, 0x3788B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788B8u;
label_3788b8:
    // 0x3788b8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3788b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3788bc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3788bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3788c0: 0x24e7b1e8  addiu       $a3, $a3, -0x4E18
    ctx->pc = 0x3788c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947304));
    // 0x3788c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3788c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3788c8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3788C8u;
    SET_GPR_U32(ctx, 31, 0x3788D0u);
    ctx->pc = 0x3788CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788C8u;
    // 0x3788cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3788C8u, 0x3788D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788D0u;
label_3788d0:
    // 0x3788d0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3788d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3788d4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3788d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3788d8: 0x24e7b200  addiu       $a3, $a3, -0x4E00
    ctx->pc = 0x3788d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947328));
    // 0x3788dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3788dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3788e0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3788E0u;
    SET_GPR_U32(ctx, 31, 0x3788E8u);
    ctx->pc = 0x3788E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788E0u;
    // 0x3788e4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3788E0u, 0x3788E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788E8u;
label_3788e8:
    // 0x3788e8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3788e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3788ec: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3788ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3788f0: 0x24e7b218  addiu       $a3, $a3, -0x4DE8
    ctx->pc = 0x3788f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947352));
    // 0x3788f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3788f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3788f8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3788F8u;
    SET_GPR_U32(ctx, 31, 0x378900u);
    ctx->pc = 0x3788FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788F8u;
    // 0x3788fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3788F8u, 0x378900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378900u;
label_378900:
    // 0x378900: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378900u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378904: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x378904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x378908: 0x24e7b230  addiu       $a3, $a3, -0x4DD0
    ctx->pc = 0x378908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947376));
    // 0x37890c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x37890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x378910: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378910u;
    SET_GPR_U32(ctx, 31, 0x378918u);
    ctx->pc = 0x378914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378910u;
    // 0x378914: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378910u, 0x378918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378918u;
label_378918:
    // 0x378918: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37891c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x37891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x378920: 0x24e7b248  addiu       $a3, $a3, -0x4DB8
    ctx->pc = 0x378920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947400));
    // 0x378924: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x378924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x378928: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378928u;
    SET_GPR_U32(ctx, 31, 0x378930u);
    ctx->pc = 0x37892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378928u;
    // 0x37892c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378928u, 0x378930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378930u;
label_378930:
    // 0x378930: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378934: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x378934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x378938: 0x24e7b260  addiu       $a3, $a3, -0x4DA0
    ctx->pc = 0x378938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947424));
    // 0x37893c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x37893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x378940: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378940u;
    SET_GPR_U32(ctx, 31, 0x378948u);
    ctx->pc = 0x378944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378940u;
    // 0x378944: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378940u, 0x378948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378948u;
label_378948:
    // 0x378948: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37894c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x37894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x378950: 0x24e7b278  addiu       $a3, $a3, -0x4D88
    ctx->pc = 0x378950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947448));
    // 0x378954: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x378954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x378958: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378958u;
    SET_GPR_U32(ctx, 31, 0x378960u);
    ctx->pc = 0x37895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378958u;
    // 0x37895c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378958u, 0x378960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378960u;
label_378960:
    // 0x378960: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378964: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x378964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x378968: 0x24e7b290  addiu       $a3, $a3, -0x4D70
    ctx->pc = 0x378968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947472));
    // 0x37896c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x37896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x378970: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378970u;
    SET_GPR_U32(ctx, 31, 0x378978u);
    ctx->pc = 0x378974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378970u;
    // 0x378974: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378970u, 0x378978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378978u;
label_378978:
    // 0x378978: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37897c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x37897cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x378980: 0x24e7b2a0  addiu       $a3, $a3, -0x4D60
    ctx->pc = 0x378980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947488));
    // 0x378984: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x378984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x378988: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378988u;
    SET_GPR_U32(ctx, 31, 0x378990u);
    ctx->pc = 0x37898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378988u;
    // 0x37898c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378988u, 0x378990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378990u;
label_378990:
    // 0x378990: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378994: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x378994u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x378998: 0x24e7b2c0  addiu       $a3, $a3, -0x4D40
    ctx->pc = 0x378998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947520));
    // 0x37899c: 0x2508b2c8  addiu       $t0, $t0, -0x4D38
    ctx->pc = 0x37899cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947528));
    // 0x3789a0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x3789a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3789a4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3789a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3789a8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3789A8u;
    SET_GPR_U32(ctx, 31, 0x3789B0u);
    ctx->pc = 0x3789ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789A8u;
    // 0x3789ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3789A8u, 0x3789B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789B0u;
label_3789b0:
    // 0x3789b0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3789b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3789b4: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x3789b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x3789b8: 0x2508b2f0  addiu       $t0, $t0, -0x4D10
    ctx->pc = 0x3789b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947568));
    // 0x3789bc: 0x24e7b2d8  addiu       $a3, $a3, -0x4D28
    ctx->pc = 0x3789bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947544));
    // 0x3789c0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3789c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3789c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3789c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3789c8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3789C8u;
    SET_GPR_U32(ctx, 31, 0x3789D0u);
    ctx->pc = 0x3789CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789C8u;
    // 0x3789cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3789C8u, 0x3789D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789D0u;
label_3789d0:
    // 0x3789d0: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x3789d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3789d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3789d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3789d8: 0x244221c0  addiu       $v0, $v0, 0x21C0
    ctx->pc = 0x3789d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8640));
    // 0x3789dc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3789dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3789e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3789e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3789e4: 0x24e7b300  addiu       $a3, $a3, -0x4D00
    ctx->pc = 0x3789e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947584));
    // 0x3789e8: 0x80700000  lb          $s0, 0x0($v1)
    ctx->pc = 0x3789e8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3789ec: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3789ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3789f0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3789f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3789f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3789f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3789f8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3789F8u;
    SET_GPR_U32(ctx, 31, 0x378A00u);
    ctx->pc = 0x3789FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789F8u;
    // 0x3789fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3789F8u, 0x378A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A00u;
label_378a00:
    // 0x378a00: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378a04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x378a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a08: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x378a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x378a0c: 0x24e7b308  addiu       $a3, $a3, -0x4CF8
    ctx->pc = 0x378a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947592));
    // 0x378a10: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378A10u;
    SET_GPR_U32(ctx, 31, 0x378A18u);
    ctx->pc = 0x378A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A10u;
    // 0x378a14: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378A10u, 0x378A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A18u;
label_378a18:
    // 0x378a18: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x378a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x378a1c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x378a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x378a20: 0x24060178  addiu       $a2, $zero, 0x178
    ctx->pc = 0x378a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x378a24: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x378a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x378a28: 0x3c08805c  lui         $t0, 0x805C
    ctx->pc = 0x378a28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32860 << 16));
    // 0x378a2c: 0xc0c7254  jal         func_31C950
    ctx->pc = 0x378A2Cu;
    SET_GPR_U32(ctx, 31, 0x378A34u);
    ctx->pc = 0x378A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A2Cu;
    // 0x378a30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C950u, 0x378A2Cu, 0x378A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A34u;
label_378a34:
    // 0x378a34: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x378a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x378a38: 0x3c08805c  lui         $t0, 0x805C
    ctx->pc = 0x378a38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32860 << 16));
    // 0x378a3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x378a3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a40: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x378a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x378a44: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x378a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x378a48: 0xc0c7254  jal         func_31C950
    ctx->pc = 0x378A48u;
    SET_GPR_U32(ctx, 31, 0x378A50u);
    ctx->pc = 0x378A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A48u;
    // 0x378a4c: 0x24060178  addiu       $a2, $zero, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C950u, 0x378A48u, 0x378A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A50u;
label_378a50:
    // 0x378a50: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x378a50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x378a54: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x378a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x378a58: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x378a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x378a5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x378a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a60: 0xa7b00002  sh          $s0, 0x2($sp)
    ctx->pc = 0x378a60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x378a64: 0x34a56060  ori         $a1, $a1, 0x6060
    ctx->pc = 0x378a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24672);
    // 0x378a68: 0xa7b00006  sh          $s0, 0x6($sp)
    ctx->pc = 0x378a68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x378a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a70: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x378a70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x378a74: 0xc0c72e0  jal         func_31CB80
    ctx->pc = 0x378A74u;
    SET_GPR_U32(ctx, 31, 0x378A7Cu);
    ctx->pc = 0x378A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A74u;
    // 0x378a78: 0xa7a2000a  sh          $v0, 0xA($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CB80u, 0x378A74u, 0x378A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A7Cu;
label_378a7c:
    // 0x378a7c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x378a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x378a80: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x378a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x378a84: 0x248421d0  addiu       $a0, $a0, 0x21D0
    ctx->pc = 0x378a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8656));
    // 0x378a88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x378a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x378a8c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x378a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x378a90: 0xc0c72a2  jal         func_31CA88
    ctx->pc = 0x378A90u;
    SET_GPR_U32(ctx, 31, 0x378A98u);
    ctx->pc = 0x378A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A90u;
    // 0x378a94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CA88u, 0x378A90u, 0x378A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A98u;
label_378a98:
    // 0x378a98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x378AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AA0u;
        // 0x378aa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378AA8u;
}
