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

// Function: func_00324108
// Address: 0x324108 - 0x3241d0
void func_00324108_0x324108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324108_0x324108");
#endif

    switch (ctx->pc) {
        case 0x324138u: goto label_324138;
        case 0x324144u: goto label_324144;
        case 0x324170u: goto label_324170;
        case 0x324188u: goto label_324188;
        case 0x32419cu: goto label_32419c;
        case 0x3241b0u: goto label_3241b0;
        default: break;
    }

    ctx->pc = 0x324108u;

    // 0x324108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32410c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32411c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324120: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x324120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x324124: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x324124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x324128: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x324128u;
    {
        const bool branch_taken_0x324128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x324128) {
            ctx->pc = 0x32412Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324128u;
            // 0x32412c: 0x82110003  lb          $s1, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324174u;
            goto label_324174;
        }
    }
    ctx->pc = 0x324130u;
    // 0x324130: 0xc0ca026  jal         func_328098
    ctx->pc = 0x324130u;
    SET_GPR_U32(ctx, 31, 0x324138u);
    ctx->pc = 0x324134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324130u;
    // 0x324134: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x324130u, 0x324138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324138u;
label_324138:
    // 0x324138: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32413c: 0xc0ca050  jal         func_328140
    ctx->pc = 0x32413Cu;
    SET_GPR_U32(ctx, 31, 0x324144u);
    ctx->pc = 0x324140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32413Cu;
    // 0x324140: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328140u, 0x32413Cu, 0x324144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324144u;
label_324144:
    // 0x324144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324148: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x324148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32414c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x32414cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x324150: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x324150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x324154: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x324154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x324158: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x324158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32415c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x324160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324160u;
    {
        const bool branch_taken_0x324160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324160u;
        // 0x324164: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324160) {
            ctx->pc = 0x324170u;
            goto label_324170;
        }
    }
    ctx->pc = 0x324168u;
    // 0x324168: 0xc0c8e80  jal         func_323A00
    ctx->pc = 0x324168u;
    SET_GPR_U32(ctx, 31, 0x324170u);
    ctx->pc = 0x32416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324168u;
    // 0x32416c: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A00u, 0x324168u, 0x324170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324170u;
label_324170:
    // 0x324170: 0x82110003  lb          $s1, 0x3($s0)
    ctx->pc = 0x324170u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_324174:
    // 0x324174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324178: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x324178u;
    {
        const bool branch_taken_0x324178 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x324178) {
            ctx->pc = 0x32417Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324178u;
            // 0x32417c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3241BCu;
            goto label_3241bc;
        }
    }
    ctx->pc = 0x324180u;
    // 0x324180: 0xc0ca026  jal         func_328098
    ctx->pc = 0x324180u;
    SET_GPR_U32(ctx, 31, 0x324188u);
    ctx->pc = 0x324184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324180u;
    // 0x324184: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x324180u, 0x324188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324188u;
label_324188:
    // 0x324188: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x324188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32418c: 0x5651000b  bnel        $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x32418Cu;
    {
        const bool branch_taken_0x32418c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x32418c) {
            ctx->pc = 0x324190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32418Cu;
            // 0x324190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3241BCu;
            goto label_3241bc;
        }
    }
    ctx->pc = 0x324194u;
    // 0x324194: 0xc0ca050  jal         func_328140
    ctx->pc = 0x324194u;
    SET_GPR_U32(ctx, 31, 0x32419Cu);
    ctx->pc = 0x324198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324194u;
    // 0x324198: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328140u, 0x324194u, 0x32419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32419Cu;
label_32419c:
    // 0x32419c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x32419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3241a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3241a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3241a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3241a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3241a8: 0xc0c8e80  jal         func_323A00
    ctx->pc = 0x3241A8u;
    SET_GPR_U32(ctx, 31, 0x3241B0u);
    ctx->pc = 0x3241ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241A8u;
    // 0x3241ac: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A00u, 0x3241A8u, 0x3241B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3241B0u;
label_3241b0:
    // 0x3241b0: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x3241b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x3241b4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3241b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3241b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3241b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3241bc:
    // 0x3241bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3241bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3241c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3241c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3241c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3241c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3241c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3241C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3241CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241C8u;
        // 0x3241cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3241C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3241D0u;
}
