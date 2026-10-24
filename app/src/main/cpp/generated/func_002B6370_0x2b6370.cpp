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

// Function: func_002B6370
// Address: 0x2b6370 - 0x2b6400
void func_002B6370_0x2b6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6370_0x2b6370");
#endif

    switch (ctx->pc) {
        case 0x2b638cu: goto label_2b638c;
        case 0x2b63a0u: goto label_2b63a0;
        case 0x2b63b0u: goto label_2b63b0;
        case 0x2b63b8u: goto label_2b63b8;
        case 0x2b63c4u: goto label_2b63c4;
        default: break;
    }

    ctx->pc = 0x2b6370u;

label_2b6370:
    // 0x2b6370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6374: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b6374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b6378: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b6378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b637c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b6380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6384: 0xc0ad944  jal         func_2B6510
    ctx->pc = 0x2B6384u;
    SET_GPR_U32(ctx, 31, 0x2B638Cu);
    ctx->pc = 0x2B6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6384u;
    // 0x2b6388: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6510u, 0x2B6384u, 0x2B638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B638Cu;
label_2b638c:
    // 0x2b638c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B638Cu;
    {
        const bool branch_taken_0x2b638c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B638Cu;
        // 0x2b6390: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b638c) {
            ctx->pc = 0x2B63E8u;
            goto label_2b63e8;
        }
    }
    ctx->pc = 0x2B6394u;
    // 0x2b6394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b6394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6398: 0xc0ad796  jal         func_2B5E58
    ctx->pc = 0x2B6398u;
    SET_GPR_U32(ctx, 31, 0x2B63A0u);
    ctx->pc = 0x2B639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6398u;
    // 0x2b639c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E58u, 0x2B6398u, 0x2B63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63A0u;
label_2b63a0:
    // 0x2b63a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b63a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63a4: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B63A4u;
    {
        const bool branch_taken_0x2b63a4 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x2b63a4) {
            ctx->pc = 0x2B63A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B63A4u;
            // 0x2b63a8: 0x8e430090  lw          $v1, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B63D4u;
            goto label_2b63d4;
        }
    }
    ctx->pc = 0x2B63ACu;
    // 0x2b63ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b63acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b63b0:
    // 0x2b63b0: 0xc0ad7a4  jal         func_2B5E90
    ctx->pc = 0x2B63B0u;
    SET_GPR_U32(ctx, 31, 0x2B63B8u);
    ctx->pc = 0x2B63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63B0u;
    // 0x2b63b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E90u, 0x2B63B0u, 0x2B63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63B8u;
label_2b63b8:
    // 0x2b63b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b63b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b63bc: 0xc0ad8dc  jal         func_2B6370
    ctx->pc = 0x2B63BCu;
    SET_GPR_U32(ctx, 31, 0x2B63C4u);
    ctx->pc = 0x2B63C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63BCu;
    // 0x2b63c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6370u;
    goto label_2b6370;
    ctx->pc = 0x2B63C4u;
label_2b63c4:
    // 0x2b63c4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2b63c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2b63c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B63C8u;
    {
        const bool branch_taken_0x2b63c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63C8u;
        // 0x2b63cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63c8) {
            ctx->pc = 0x2B63B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b63b0;
        }
    }
    ctx->pc = 0x2B63D0u;
    // 0x2b63d0: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x2b63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_2b63d4:
    // 0x2b63d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b63d8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2b63d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2b63dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2b63dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b63e0: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x2b63e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x2b63e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b63e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b63e8:
    // 0x2b63e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b63e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b63ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b63ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b63f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b63f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b63f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B63F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63F4u;
        // 0x2b63f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B63F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B63FCu;
    // 0x2b63fc: 0x0  nop
    ctx->pc = 0x2b63fcu;
    // NOP
    ctx->pc = 0x2b6400u;
}
