#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlaySeqDel__C12cEventEffectPC15cEventSeqEffect
// Address: 0x7ad230 - 0x7ad308
void movePlaySeqDel__C12cEventEffectPC15cEventSeqEffect_0x7ad230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeqDel__C12cEventEffectPC15cEventSeqEffect_0x7ad230");
#endif

    switch (ctx->pc) {
        case 0x7ad28cu: goto label_7ad28c;
        case 0x7ad29cu: goto label_7ad29c;
        case 0x7ad2b8u: goto label_7ad2b8;
        case 0x7ad2c8u: goto label_7ad2c8;
        case 0x7ad2f8u: goto label_7ad2f8;
        default: break;
    }

    ctx->pc = 0x7ad230u;

    // 0x7ad230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ad230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ad234: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7ad234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7ad238: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ad238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ad23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad240: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7ad240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad244: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x7ad244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x7ad248: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7AD248u;
    {
        const bool branch_taken_0x7ad248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD248u;
        // 0x7ad24c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad248) {
            ctx->pc = 0x7AD2A4u;
            goto label_7ad2a4;
        }
    }
    ctx->pc = 0x7AD250u;
    // 0x7ad250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AD250u;
    {
        const bool branch_taken_0x7ad250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD250u;
        // 0x7ad254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad250) {
            ctx->pc = 0x7AD268u;
            goto label_7ad268;
        }
    }
    ctx->pc = 0x7AD258u;
    // 0x7ad258: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AD258u;
    {
        const bool branch_taken_0x7ad258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x7ad258) {
            ctx->pc = 0x7AD25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD258u;
            // 0x7ad25c: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD27Cu;
            goto label_7ad27c;
        }
    }
    ctx->pc = 0x7AD260u;
    // 0x7ad260: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7AD260u;
    {
        const bool branch_taken_0x7ad260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD260u;
        // 0x7ad264: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad260) {
            ctx->pc = 0x7AD2FCu;
            goto label_7ad2fc;
        }
    }
    ctx->pc = 0x7AD268u;
label_7ad268:
    // 0x7ad268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7ad268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7ad26c: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7AD26Cu;
    {
        const bool branch_taken_0x7ad26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x7ad26c) {
            ctx->pc = 0x7AD270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD26Cu;
            // 0x7ad270: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD2D0u;
            goto label_7ad2d0;
        }
    }
    ctx->pc = 0x7AD274u;
    // 0x7ad274: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x7AD274u;
    {
        const bool branch_taken_0x7ad274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD274u;
        // 0x7ad278: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad274) {
            ctx->pc = 0x7AD2FCu;
            goto label_7ad2fc;
        }
    }
    ctx->pc = 0x7AD27Cu;
label_7ad27c:
    // 0x7ad27c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ad27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ad280: 0x9206000a  lbu         $a2, 0xA($s0)
    ctx->pc = 0x7ad280u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7ad284: 0xc1ec10e  jal         func_7B0438
    ctx->pc = 0x7AD284u;
    SET_GPR_U32(ctx, 31, 0x7AD28Cu);
    ctx->pc = 0x7AD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD284u;
    // 0x7ad288: 0x248458d8  addiu       $a0, $a0, 0x58D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0438u, 0x7AD284u, 0x7AD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD28Cu;
label_7ad28c:
    // 0x7ad28c: 0x92050011  lbu         $a1, 0x11($s0)
    ctx->pc = 0x7ad28cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x7ad290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ad290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad294: 0xc0c1880  jal         func_306200
    ctx->pc = 0x7AD294u;
    SET_GPR_U32(ctx, 31, 0x7AD29Cu);
    ctx->pc = 0x7AD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD294u;
    // 0x7ad298: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x7AD294u, 0x7AD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD29Cu;
label_7ad29c:
    // 0x7ad29c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7AD29Cu;
    {
        const bool branch_taken_0x7ad29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD29Cu;
        // 0x7ad2a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad29c) {
            ctx->pc = 0x7AD2FCu;
            goto label_7ad2fc;
        }
    }
    ctx->pc = 0x7AD2A4u;
label_7ad2a4:
    // 0x7ad2a4: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x7ad2a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad2a8: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ad2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ad2ac: 0x9206000a  lbu         $a2, 0xA($s0)
    ctx->pc = 0x7ad2acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7ad2b0: 0xc1ec10e  jal         func_7B0438
    ctx->pc = 0x7AD2B0u;
    SET_GPR_U32(ctx, 31, 0x7AD2B8u);
    ctx->pc = 0x7AD2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD2B0u;
    // 0x7ad2b4: 0x248458d8  addiu       $a0, $a0, 0x58D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0438u, 0x7AD2B0u, 0x7AD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD2B8u;
label_7ad2b8:
    // 0x7ad2b8: 0x92050011  lbu         $a1, 0x11($s0)
    ctx->pc = 0x7ad2b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x7ad2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ad2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad2c0: 0xc0c1880  jal         func_306200
    ctx->pc = 0x7AD2C0u;
    SET_GPR_U32(ctx, 31, 0x7AD2C8u);
    ctx->pc = 0x7AD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD2C0u;
    // 0x7ad2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x7AD2C0u, 0x7AD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD2C8u;
label_7ad2c8:
    // 0x7ad2c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7AD2C8u;
    {
        const bool branch_taken_0x7ad2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD2C8u;
        // 0x7ad2cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad2c8) {
            ctx->pc = 0x7AD2FCu;
            goto label_7ad2fc;
        }
    }
    ctx->pc = 0x7AD2D0u;
label_7ad2d0:
    // 0x7ad2d0: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ad2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ad2d4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x7ad2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x7ad2d8: 0x92070028  lbu         $a3, 0x28($s0)
    ctx->pc = 0x7ad2d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ad2dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7ad2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7ad2e0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x7ad2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7ad2e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7ad2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7ad2e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7ad2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7ad2ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7ad2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7ad2f0: 0xc0c191c  jal         func_306470
    ctx->pc = 0x7AD2F0u;
    SET_GPR_U32(ctx, 31, 0x7AD2F8u);
    ctx->pc = 0x7AD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD2F0u;
    // 0x7ad2f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306470u, 0x7AD2F0u, 0x7AD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD2F8u;
label_7ad2f8:
    // 0x7ad2f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ad2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ad2fc:
    // 0x7ad2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad300: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD300u;
        // 0x7ad304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD308u;
}
} // namespace gh_event
