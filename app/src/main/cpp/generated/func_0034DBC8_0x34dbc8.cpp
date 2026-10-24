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

// Function: func_0034DBC8
// Address: 0x34dbc8 - 0x34dc88
void func_0034DBC8_0x34dbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034DBC8_0x34dbc8");
#endif

    switch (ctx->pc) {
        case 0x34dbf4u: goto label_34dbf4;
        case 0x34dc08u: goto label_34dc08;
        case 0x34dc24u: goto label_34dc24;
        case 0x34dc30u: goto label_34dc30;
        case 0x34dc38u: goto label_34dc38;
        case 0x34dc40u: goto label_34dc40;
        case 0x34dc48u: goto label_34dc48;
        case 0x34dc74u: goto label_34dc74;
        default: break;
    }

    ctx->pc = 0x34dbc8u;

    // 0x34dbc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34dbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34dbcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34dbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dbd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34dbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34dbd4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x34dbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x34dbd8: 0x2610e0c0  addiu       $s0, $s0, -0x1F40
    ctx->pc = 0x34dbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959296));
    // 0x34dbdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34dbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34dbe0: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x34dbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x34dbe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34dbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dbe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34dbec: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x34DBECu;
    SET_GPR_U32(ctx, 31, 0x34DBF4u);
    ctx->pc = 0x34DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DBECu;
    // 0x34dbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x34DBECu, 0x34DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBF4u;
label_34dbf4:
    // 0x34dbf4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x34dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x34dbf8: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x34dbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x34dbfc: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x34dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x34dc00: 0xc0d9a58  jal         func_366960
    ctx->pc = 0x34DC00u;
    SET_GPR_U32(ctx, 31, 0x34DC08u);
    ctx->pc = 0x34DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC00u;
    // 0x34dc04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34DC00u, 0x34DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC08u;
label_34dc08:
    // 0x34dc08: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x34dc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x34dc0c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x34dc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x34dc10: 0xb2020197  sdl         $v0, 0x197($s0)
    ctx->pc = 0x34dc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34dc14: 0xb6020190  sdr         $v0, 0x190($s0)
    ctx->pc = 0x34dc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34dc18: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x34dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x34dc1c: 0xc0d3750  jal         func_34DD40
    ctx->pc = 0x34DC1Cu;
    SET_GPR_U32(ctx, 31, 0x34DC24u);
    ctx->pc = 0x34DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC1Cu;
    // 0x34dc20: 0x2604019c  addiu       $a0, $s0, 0x19C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD40u, 0x34DC1Cu, 0x34DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC24u;
label_34dc24:
    // 0x34dc24: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x34dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x34dc28: 0xc0d68a6  jal         func_35A298
    ctx->pc = 0x34DC28u;
    SET_GPR_U32(ctx, 31, 0x34DC30u);
    ctx->pc = 0x34DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC28u;
    // 0x34dc2c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A298u, 0x34DC28u, 0x34DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC30u;
label_34dc30:
    // 0x34dc30: 0xc0d2e9a  jal         func_34BA68
    ctx->pc = 0x34DC30u;
    SET_GPR_U32(ctx, 31, 0x34DC38u);
    ctx->pc = 0x34DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC30u;
    // 0x34dc34: 0x260401bc  addiu       $a0, $s0, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BA68u, 0x34DC30u, 0x34DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC38u;
label_34dc38:
    // 0x34dc38: 0xc0d3722  jal         func_34DC88
    ctx->pc = 0x34DC38u;
    SET_GPR_U32(ctx, 31, 0x34DC40u);
    ctx->pc = 0x34DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC38u;
    // 0x34dc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DC88u, 0x34DC38u, 0x34DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC40u;
label_34dc40:
    // 0x34dc40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x34dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34dc44: 0x26100220  addiu       $s0, $s0, 0x220
    ctx->pc = 0x34dc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_34dc48:
    // 0x34dc48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34dc4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x34dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x34dc50: 0x0  nop
    ctx->pc = 0x34dc50u;
    // NOP
    // 0x34dc54: 0x0  nop
    ctx->pc = 0x34dc54u;
    // NOP
    // 0x34dc58: 0x0  nop
    ctx->pc = 0x34dc58u;
    // NOP
    // 0x34dc5c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34DC5Cu;
    {
        const bool branch_taken_0x34dc5c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x34DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC5Cu;
        // 0x34dc60: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc5c) {
            ctx->pc = 0x34DC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34dc48;
        }
    }
    ctx->pc = 0x34DC64u;
    // 0x34dc64: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x34dc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34dc68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x34dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x34dc6c: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x34DC6Cu;
    SET_GPR_U32(ctx, 31, 0x34DC74u);
    ctx->pc = 0x34DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC6Cu;
    // 0x34dc70: 0x2484e280  addiu       $a0, $a0, -0x1D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x34DC6Cu, 0x34DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC74u;
label_34dc74:
    // 0x34dc74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34dc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dc78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34dc78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34dc7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dc80: 0x3e00008  jr          $ra
    ctx->pc = 0x34DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC80u;
        // 0x34dc84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DC88u;
}
