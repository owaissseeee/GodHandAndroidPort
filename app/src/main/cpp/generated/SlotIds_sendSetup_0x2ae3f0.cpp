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

// Function: SlotIds_sendSetup
// Address: 0x2ae3f0 - 0x2ae4a8
void SlotIds_sendSetup_0x2ae3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SlotIds_sendSetup_0x2ae3f0");
#endif

    switch (ctx->pc) {
        case 0x2ae420u: goto label_2ae420;
        case 0x2ae430u: goto label_2ae430;
        case 0x2ae460u: goto label_2ae460;
        case 0x2ae468u: goto label_2ae468;
        case 0x2ae47cu: goto label_2ae47c;
        default: break;
    }

    ctx->pc = 0x2ae3f0u;

    // 0x2ae3f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ae3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ae3f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ae3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2ae3f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ae3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ae3fc: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x2ae3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x2ae400: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ae400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ae404: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x2ae404u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x2ae408: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ae408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2ae40c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ae40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ae410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ae414: 0x3c130045  lui         $s3, 0x45
    ctx->pc = 0x2ae414u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)69 << 16));
    // 0x2ae418: 0x26048140  addiu       $a0, $s0, -0x7EC0
    ctx->pc = 0x2ae418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
    // 0x2ae41c: 0x0  nop
    ctx->pc = 0x2ae41cu;
    // NOP
label_2ae420:
    // 0x2ae420: 0x2625b060  addiu       $a1, $s1, -0x4FA0
    ctx->pc = 0x2ae420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946912));
    // 0x2ae424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae428: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2AE428u;
    SET_GPR_U32(ctx, 31, 0x2AE430u);
    ctx->pc = 0x2AE42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE428u;
    // 0x2ae42c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2AE428u, 0x2AE430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE430u;
label_2ae430:
    // 0x2ae430: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AE430u;
    {
        const bool branch_taken_0x2ae430 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE430u;
        // 0x2ae434: 0x26048140  addiu       $a0, $s0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae430) {
            ctx->pc = 0x2AE420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae420;
        }
    }
    ctx->pc = 0x2AE438u;
    // 0x2ae438: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ae438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ae43c: 0x2446b080  addiu       $a2, $v0, -0x4F80
    ctx->pc = 0x2ae43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946944));
    // 0x2ae440: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2ae440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ae444: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2ae444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ae448: 0x80c40008  lb          $a0, 0x8($a2)
    ctx->pc = 0x2ae448u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44B088u));
    // 0x2ae44c: 0x80c50009  lb          $a1, 0x9($a2)
    ctx->pc = 0x2ae44cu;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x44B089u));
    // 0x2ae450: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2ae450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ae454: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2ae454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ae458: 0xa3a40008  sb          $a0, 0x8($sp)
    ctx->pc = 0x2ae458u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae45c: 0xa3a50009  sb          $a1, 0x9($sp)
    ctx->pc = 0x2ae45cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 5));
label_2ae460:
    // 0x2ae460: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x2AE460u;
    SET_GPR_U32(ctx, 31, 0x2AE468u);
    ctx->pc = 0x2AE464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE460u;
    // 0x2ae464: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x2AE460u, 0x2AE468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE468u;
label_2ae468:
    // 0x2ae468: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2ae468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ae46c: 0x26048140  addiu       $a0, $s0, -0x7EC0
    ctx->pc = 0x2ae46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
    // 0x2ae470: 0x2665b090  addiu       $a1, $s3, -0x4F70
    ctx->pc = 0x2ae470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946960));
    // 0x2ae474: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2AE474u;
    SET_GPR_U32(ctx, 31, 0x2AE47Cu);
    ctx->pc = 0x2AE478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE474u;
    // 0x2ae478: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2AE474u, 0x2AE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE47Cu;
label_2ae47c:
    // 0x2ae47c: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AE47Cu;
    {
        const bool branch_taken_0x2ae47c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE47Cu;
        // 0x2ae480: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae47c) {
            ctx->pc = 0x2AE460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae460;
        }
    }
    ctx->pc = 0x2AE484u;
    // 0x2ae484: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ae484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae488: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2ae488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2ae48c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2ae48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2ae490: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ae490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae494: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ae494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae498: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ae498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae49c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ae49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4A0u;
        // 0x2ae4a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE4A8u;
}
