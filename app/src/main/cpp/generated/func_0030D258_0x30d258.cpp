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

// Function: func_0030D258
// Address: 0x30d258 - 0x30d358
void func_0030D258_0x30d258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030D258_0x30d258");
#endif

    switch (ctx->pc) {
        case 0x30d290u: goto label_30d290;
        case 0x30d2d8u: goto label_30d2d8;
        case 0x30d300u: goto label_30d300;
        case 0x30d30cu: goto label_30d30c;
        case 0x30d318u: goto label_30d318;
        case 0x30d324u: goto label_30d324;
        default: break;
    }

    ctx->pc = 0x30d258u;

    // 0x30d258: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x30d258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x30d25c: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x30d25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x30d260: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x30d260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x30d264: 0x24a23dc0  addiu       $v0, $a1, 0x3DC0
    ctx->pc = 0x30d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15808));
    // 0x30d268: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x30d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x30d26c: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x30d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x30d270: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x30d270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x30d274: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x30d274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x30d278: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x30d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x30d27c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x30d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x30d280: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x30d280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x30d284: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x30d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x30d288: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30d28c: 0x0  nop
    ctx->pc = 0x30d28cu;
    // NOP
label_30d290:
    // 0x30d290: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x30d290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d294: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x30d294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30d298: 0x0  nop
    ctx->pc = 0x30d298u;
    // NOP
    // 0x30d29c: 0x0  nop
    ctx->pc = 0x30d29cu;
    // NOP
    // 0x30d2a0: 0x601fffb  bgez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30D2A0u;
    {
        const bool branch_taken_0x30d2a0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x30D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2A0u;
        // 0x30d2a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2a0) {
            ctx->pc = 0x30D290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d290;
        }
    }
    ctx->pc = 0x30D2A8u;
    // 0x30d2a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30d2ac: 0x24b63dc0  addiu       $s6, $a1, 0x3DC0
    ctx->pc = 0x30d2acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 15808));
    // 0x30d2b0: 0x2123b  dsra        $v0, $v0, 8
    ctx->pc = 0x30d2b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 8);
    // 0x30d2b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30d2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30D2B8u;
    {
        const bool branch_taken_0x30d2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2B8u;
        // 0x30d2bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2b8) {
            ctx->pc = 0x30D330u;
            goto label_30d330;
        }
    }
    ctx->pc = 0x30D2C0u;
    // 0x30d2c0: 0x3c150004  lui         $s5, 0x4
    ctx->pc = 0x30d2c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4 << 16));
    // 0x30d2c4: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x30d2c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
    // 0x30d2c8: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x30d2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
    // 0x30d2cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30d2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2d0: 0x112c00  sll         $a1, $s1, 16
    ctx->pc = 0x30d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x30d2d4: 0x0  nop
    ctx->pc = 0x30d2d4u;
    // NOP
label_30d2d8:
    // 0x30d2d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2dc: 0x153403  sra         $a2, $s5, 16
    ctx->pc = 0x30d2dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 21), 16));
    // 0x30d2e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30d2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d2e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2ec: 0x145403  sra         $t2, $s4, 16
    ctx->pc = 0x30d2ecu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 20), 16));
    // 0x30d2f0: 0x135c03  sra         $t3, $s3, 16
    ctx->pc = 0x30d2f0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 19), 16));
    // 0x30d2f4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x30d2f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x30d2f8: 0xc0e550c  jal         func_395430
    ctx->pc = 0x30D2F8u;
    SET_GPR_U32(ctx, 31, 0x30D300u);
    ctx->pc = 0x30D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2F8u;
    // 0x30d2fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395430u, 0x30D2F8u, 0x30D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D300u;
label_30d300:
    // 0x30d300: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x30d300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x30d304: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x30D304u;
    SET_GPR_U32(ctx, 31, 0x30D30Cu);
    ctx->pc = 0x30D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D304u;
    // 0x30d308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x30D304u, 0x30D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D30Cu;
label_30d30c:
    // 0x30d30c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30d30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d310: 0xc0e55d6  jal         func_395758
    ctx->pc = 0x30D310u;
    SET_GPR_U32(ctx, 31, 0x30D318u);
    ctx->pc = 0x30D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D310u;
    // 0x30d314: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395758u, 0x30D310u, 0x30D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D318u;
label_30d318:
    // 0x30d318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d31c: 0xc0e543e  jal         func_3950F8
    ctx->pc = 0x30D31Cu;
    SET_GPR_U32(ctx, 31, 0x30D324u);
    ctx->pc = 0x30D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D31Cu;
    // 0x30d320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3950F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3950F8u, 0x30D31Cu, 0x30D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D324u;
label_30d324:
    // 0x30d324: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x30d324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x30d328: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30D328u;
    {
        const bool branch_taken_0x30d328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d328) {
            ctx->pc = 0x30D32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D328u;
            // 0x30d32c: 0x112c00  sll         $a1, $s1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d2d8;
        }
    }
    ctx->pc = 0x30D330u;
label_30d330:
    // 0x30d330: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x30d330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30d334: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x30d334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30d338: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x30d338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30d33c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x30d33cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30d340: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x30d340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30d344: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x30d344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30d348: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x30d348u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30d34c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30d34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d350: 0x3e00008  jr          $ra
    ctx->pc = 0x30D350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D350u;
        // 0x30d354: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D358u;
}
