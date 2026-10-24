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

// Function: cOmSub_move
// Address: 0x1c3f38 - 0x1c3fc0
void cOmSub_move_0x1c3f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSub_move_0x1c3f38");
#endif

    switch (ctx->pc) {
        case 0x1c3f38u: goto label_1c3f38;
        case 0x1c3f3cu: goto label_1c3f3c;
        case 0x1c3f40u: goto label_1c3f40;
        case 0x1c3f44u: goto label_1c3f44;
        case 0x1c3f48u: goto label_1c3f48;
        case 0x1c3f4cu: goto label_1c3f4c;
        case 0x1c3f50u: goto label_1c3f50;
        case 0x1c3f54u: goto label_1c3f54;
        case 0x1c3f58u: goto label_1c3f58;
        case 0x1c3f5cu: goto label_1c3f5c;
        case 0x1c3f60u: goto label_1c3f60;
        case 0x1c3f64u: goto label_1c3f64;
        case 0x1c3f68u: goto label_1c3f68;
        case 0x1c3f6cu: goto label_1c3f6c;
        case 0x1c3f70u: goto label_1c3f70;
        case 0x1c3f74u: goto label_1c3f74;
        case 0x1c3f78u: goto label_1c3f78;
        case 0x1c3f7cu: goto label_1c3f7c;
        case 0x1c3f80u: goto label_1c3f80;
        case 0x1c3f84u: goto label_1c3f84;
        case 0x1c3f88u: goto label_1c3f88;
        case 0x1c3f8cu: goto label_1c3f8c;
        case 0x1c3f90u: goto label_1c3f90;
        case 0x1c3f94u: goto label_1c3f94;
        case 0x1c3f98u: goto label_1c3f98;
        case 0x1c3f9cu: goto label_1c3f9c;
        case 0x1c3fa0u: goto label_1c3fa0;
        case 0x1c3fa4u: goto label_1c3fa4;
        case 0x1c3fa8u: goto label_1c3fa8;
        case 0x1c3facu: goto label_1c3fac;
        case 0x1c3fb0u: goto label_1c3fb0;
        case 0x1c3fb4u: goto label_1c3fb4;
        case 0x1c3fb8u: goto label_1c3fb8;
        case 0x1c3fbcu: goto label_1c3fbc;
        default: break;
    }

    ctx->pc = 0x1c3f38u;

label_1c3f38:
    // 0x1c3f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c3f3c:
    // 0x1c3f3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c3f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f40:
    // 0x1c3f40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c3f44:
    // 0x1c3f44: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c3f48:
    // 0x1c3f48: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c3f4c:
    if (ctx->pc == 0x1C3F4Cu) {
        ctx->pc = 0x1C3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F48u;
        // 0x1c3f4c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F50u;
        goto label_1c3f50;
    }
    ctx->pc = 0x1C3F48u;
    {
        const bool branch_taken_0x1c3f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F48u;
        // 0x1c3f4c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f48) {
            ctx->pc = 0x1C3FB0u;
            goto label_1c3fb0;
        }
    }
    ctx->pc = 0x1C3F50u;
label_1c3f50:
    // 0x1c3f50: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x1c3f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_1c3f54:
    // 0x1c3f54: 0x24489d80  addiu       $t0, $v0, -0x6280
    ctx->pc = 0x1c3f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942080));
label_1c3f58:
    // 0x1c3f58: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x1c3f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1c3f5c:
    // 0x1c3f5c: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x1c3f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1c3f60:
    // 0x1c3f60: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x1c3f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1c3f64:
    // 0x1c3f64: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x1c3f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1c3f68:
    // 0x1c3f68: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x1c3f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1c3f6c:
    // 0x1c3f6c: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x1c3f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1c3f70:
    // 0x1c3f70: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1c3f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c3f74:
    // 0x1c3f74: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1c3f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c3f78:
    // 0x1c3f78: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1c3f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c3f7c:
    // 0x1c3f7c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1c3f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c3f80:
    // 0x1c3f80: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x1c3f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c3f84:
    // 0x1c3f84: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x1c3f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c3f88:
    // 0x1c3f88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c3f8c:
    // 0x1c3f8c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1c3f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c3f90:
    // 0x1c3f90: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1c3f94:
    // 0x1c3f94: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c3f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c3f98:
    // 0x1c3f98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1c3f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3f9c:
    // 0x1c3f9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c3fa0:
    // 0x1c3fa0: 0x40f809  jalr        $v0
label_1c3fa4:
    if (ctx->pc == 0x1C3FA4u) {
        ctx->pc = 0x1C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA0u;
        // 0x1c3fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FA8u;
        goto label_1c3fa8;
    }
    ctx->pc = 0x1C3FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3FA8u);
        ctx->pc = 0x1C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA0u;
        // 0x1c3fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FA0u, 0x1C3FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3FA8u;
label_1c3fa8:
    // 0x1c3fa8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c3fac:
    if (ctx->pc == 0x1C3FACu) {
        ctx->pc = 0x1C3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA8u;
        // 0x1c3fac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FB0u;
        goto label_1c3fb0;
    }
    ctx->pc = 0x1C3FA8u;
    {
        const bool branch_taken_0x1c3fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA8u;
        // 0x1c3fac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fa8) {
            ctx->pc = 0x1C3FB8u;
            goto label_1c3fb8;
        }
    }
    ctx->pc = 0x1C3FB0u;
label_1c3fb0:
    // 0x1c3fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3fb4:
    // 0x1c3fb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3fb8:
    // 0x1c3fb8: 0x3e00008  jr          $ra
label_1c3fbc:
    if (ctx->pc == 0x1C3FBCu) {
        ctx->pc = 0x1C3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FB8u;
        // 0x1c3fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FC0u;
        goto label_fallthrough_0x1c3fb8;
    }
    ctx->pc = 0x1C3FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FB8u;
        // 0x1c3fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3fb8:
    ctx->pc = 0x1C3FC0u;
}
