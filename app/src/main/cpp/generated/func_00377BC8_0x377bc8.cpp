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

// Function: func_00377BC8
// Address: 0x377bc8 - 0x377cb8
void func_00377BC8_0x377bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377BC8_0x377bc8");
#endif

    switch (ctx->pc) {
        case 0x377bf0u: goto label_377bf0;
        case 0x377c3cu: goto label_377c3c;
        case 0x377c50u: goto label_377c50;
        case 0x377c64u: goto label_377c64;
        case 0x377c78u: goto label_377c78;
        case 0x377c80u: goto label_377c80;
        case 0x377c88u: goto label_377c88;
        case 0x377c90u: goto label_377c90;
        case 0x377c98u: goto label_377c98;
        case 0x377ca0u: goto label_377ca0;
        default: break;
    }

    ctx->pc = 0x377bc8u;

    // 0x377bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377bd4: 0x240600c4  addiu       $a2, $zero, 0xC4
    ctx->pc = 0x377bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x377bd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377bdc: 0x3c110077  lui         $s1, 0x77
    ctx->pc = 0x377bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)119 << 16));
    // 0x377be0: 0x2630a790  addiu       $s0, $s1, -0x5870
    ctx->pc = 0x377be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944656));
    // 0x377be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377be8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377BE8u;
    SET_GPR_U32(ctx, 31, 0x377BF0u);
    ctx->pc = 0x377BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377BE8u;
    // 0x377bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377BE8u, 0x377BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377BF0u;
label_377bf0:
    // 0x377bf0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x377bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x377bf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x377bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x377bf8: 0x24030d37  addiu       $v1, $zero, 0xD37
    ctx->pc = 0x377bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3383));
    // 0x377bfc: 0x2489a600  addiu       $t1, $a0, -0x5A00
    ctx->pc = 0x377bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944256));
    // 0x377c00: 0x2628a790  addiu       $t0, $s1, -0x5870
    ctx->pc = 0x377c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944656));
    // 0x377c04: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x377c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x377c08: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x377c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x377c0c: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x377c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x45A608u));
    // 0x377c10: 0xb1060007  sdl         $a2, 0x7($t0)
    ctx->pc = 0x377c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x377c14: 0xb5060000  sdr         $a2, 0x0($t0)
    ctx->pc = 0x377c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x377c18: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x377c18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x377c1c: 0x8526000c  lh          $a2, 0xC($t1)
    ctx->pc = 0x377c1cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x45A60Cu));
    // 0x377c20: 0xa506000c  sh          $a2, 0xC($t0)
    ctx->pc = 0x377c20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x377c24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x377c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x377c28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377c2c: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x377c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x377c30: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x377c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x377c34: 0xc0ddf2e  jal         func_377CB8
    ctx->pc = 0x377C34u;
    SET_GPR_U32(ctx, 31, 0x377C3Cu);
    ctx->pc = 0x377C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C34u;
    // 0x377c38: 0xae05001c  sw          $a1, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377CB8u, 0x377C34u, 0x377C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C3Cu;
label_377c3c:
    // 0x377c3c: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c44: 0x2484a880  addiu       $a0, $a0, -0x5780
    ctx->pc = 0x377c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944896));
    // 0x377c48: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377C48u;
    SET_GPR_U32(ctx, 31, 0x377C50u);
    ctx->pc = 0x377C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C48u;
    // 0x377c4c: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377C48u, 0x377C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C50u;
label_377c50:
    // 0x377c50: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c58: 0x2484a9c0  addiu       $a0, $a0, -0x5640
    ctx->pc = 0x377c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
    // 0x377c5c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377C5Cu;
    SET_GPR_U32(ctx, 31, 0x377C64u);
    ctx->pc = 0x377C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C5Cu;
    // 0x377c60: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377C5Cu, 0x377C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C64u;
label_377c64:
    // 0x377c64: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c6c: 0x2484b1c0  addiu       $a0, $a0, -0x4E40
    ctx->pc = 0x377c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947264));
    // 0x377c70: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377C70u;
    SET_GPR_U32(ctx, 31, 0x377C78u);
    ctx->pc = 0x377C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C70u;
    // 0x377c74: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377C70u, 0x377C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C78u;
label_377c78:
    // 0x377c78: 0xc0ddf56  jal         func_377D58
    ctx->pc = 0x377C78u;
    SET_GPR_U32(ctx, 31, 0x377C80u);
    ctx->pc = 0x377D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377D58u, 0x377C78u, 0x377C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C80u;
label_377c80:
    // 0x377c80: 0xc0ddf60  jal         func_377D80
    ctx->pc = 0x377C80u;
    SET_GPR_U32(ctx, 31, 0x377C88u);
    ctx->pc = 0x377D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377D80u, 0x377C80u, 0x377C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C88u;
label_377c88:
    // 0x377c88: 0xc0ddf8a  jal         func_377E28
    ctx->pc = 0x377C88u;
    SET_GPR_U32(ctx, 31, 0x377C90u);
    ctx->pc = 0x377E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377E28u, 0x377C88u, 0x377C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C90u;
label_377c90:
    // 0x377c90: 0xc0ddfb4  jal         func_377ED0
    ctx->pc = 0x377C90u;
    SET_GPR_U32(ctx, 31, 0x377C98u);
    ctx->pc = 0x377ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377ED0u, 0x377C90u, 0x377C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C98u;
label_377c98:
    // 0x377c98: 0xc0de150  jal         func_378540
    ctx->pc = 0x377C98u;
    SET_GPR_U32(ctx, 31, 0x377CA0u);
    ctx->pc = 0x378540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378540u, 0x377C98u, 0x377CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377CA0u;
label_377ca0:
    // 0x377ca0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377cac: 0x3e00008  jr          $ra
    ctx->pc = 0x377CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377CACu;
        // 0x377cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377CB4u;
    // 0x377cb4: 0x0  nop
    ctx->pc = 0x377cb4u;
    // NOP
    ctx->pc = 0x377cb8u;
}
