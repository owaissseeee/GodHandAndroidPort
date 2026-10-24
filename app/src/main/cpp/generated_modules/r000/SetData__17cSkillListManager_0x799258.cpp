#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: SetData__17cSkillListManager
// Address: 0x799258 - 0x799368
void SetData__17cSkillListManager_0x799258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData__17cSkillListManager_0x799258");
#endif

    switch (ctx->pc) {
        case 0x799308u: goto label_799308;
        case 0x799338u: goto label_799338;
        case 0x799340u: goto label_799340;
        case 0x799350u: goto label_799350;
        default: break;
    }

    ctx->pc = 0x799258u;

    // 0x799258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79925c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799260: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799264: 0x244674a0  addiu       $a2, $v0, 0x74A0
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x799268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79926c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79926cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799270: 0x8cc40554  lw          $a0, 0x554($a2)
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7479F4u));
    // 0x799274: 0x8cc20594  lw          $v0, 0x594($a2)
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x799278: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79927c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x799280: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799280u;
    {
        const bool branch_taken_0x799280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799280u;
        // 0x799284: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799280) {
            ctx->pc = 0x799294u;
            goto label_799294;
        }
    }
    ctx->pc = 0x799288u;
    // 0x799288: 0x8cc2056c  lw          $v0, 0x56C($a2)
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1388)));
    // 0x79928c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79928Cu;
    {
        const bool branch_taken_0x79928c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79928c) {
            ctx->pc = 0x79929Cu;
            goto label_79929c;
        }
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x799298: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79929c:
    // 0x79929c: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x79929Cu;
    {
        const bool branch_taken_0x79929c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x79929c) {
            ctx->pc = 0x799348u;
            goto label_799348;
        }
    }
    ctx->pc = 0x7992A4u;
    // 0x7992a4: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x7992a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x7992a8: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x7992a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x7992ac: 0x88a3000b  lwl         $v1, 0xB($a1)
    ctx->pc = 0x7992acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x7992b0: 0x98a30008  lwr         $v1, 0x8($a1)
    ctx->pc = 0x7992b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x7992b4: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x7992b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992b8: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x7992b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7992bc: 0xaa03000f  swl         $v1, 0xF($s0)
    ctx->pc = 0x7992bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x7992c0: 0xba03000c  swr         $v1, 0xC($s0)
    ctx->pc = 0x7992c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x7992c4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x7992c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7992cc: 0x34424c53  ori         $v0, $v0, 0x4C53
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19539);
    // 0x7992d0: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x7992D0u;
    {
        const bool branch_taken_0x7992d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D0u;
        // 0x7992d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d0) {
            ctx->pc = 0x799348u;
            goto label_799348;
        }
    }
    ctx->pc = 0x7992D8u;
    // 0x7992d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7992dc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x799328u;
            goto label_799328;
        }
    }
    ctx->pc = 0x7992E4u;
    // 0x7992e4: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x7992e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7992ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x7992ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x7992f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7992F0u;
    {
        const bool branch_taken_0x7992f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F0u;
        // 0x7992f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992f0) {
            ctx->pc = 0x79932Cu;
            goto label_79932c;
        }
    }
    ctx->pc = 0x7992F8u;
    // 0x7992f8: 0x94650018  lhu         $a1, 0x18($v1)
    ctx->pc = 0x7992f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7992fc: 0xa4650014  sh          $a1, 0x14($v1)
    ctx->pc = 0x7992fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x799300: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799304: 0x0  nop
    ctx->pc = 0x799304u;
    // NOP
label_799308:
    // 0x799308: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x79930c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799310: 0x0  nop
    ctx->pc = 0x799310u;
    // NOP
    // 0x799314: 0x0  nop
    ctx->pc = 0x799314u;
    // NOP
    // 0x799318: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799318u;
    {
        const bool branch_taken_0x799318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799318) {
            ctx->pc = 0x79931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799318u;
            // 0x79931c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799308;
        }
    }
    ctx->pc = 0x799320u;
    // 0x799320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x799320u;
    {
        const bool branch_taken_0x799320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799320) {
            ctx->pc = 0x799330u;
            goto label_799330;
        }
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x799328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_79932c:
    // 0x79932c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799330:
    // 0x799330: 0xc1e6500  jal         func_799400
    ctx->pc = 0x799330u;
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->pc = 0x799334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799400u, 0x799330u, 0x799338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0xc1e6772  jal         func_799DC8
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799DC8u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799340u;
    {
        const bool branch_taken_0x799340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799340u;
        // 0x799344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799340) {
            ctx->pc = 0x799354u;
            goto label_799354;
        }
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0xc1e6484  jal         func_799210
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799210u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799354:
    // 0x799354: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79935c: 0x3e00008  jr          $ra
    ctx->pc = 0x79935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799364u;
    // 0x799364: 0x0  nop
    ctx->pc = 0x799364u;
    // NOP
    ctx->pc = 0x799368u;
}
} // namespace gh_r000
