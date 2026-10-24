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

// Function: func_00129630
// Address: 0x129630 - 0x129718
void func_00129630_0x129630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00129630_0x129630");
#endif

    switch (ctx->pc) {
        case 0x129664u: goto label_129664;
        case 0x1296acu: goto label_1296ac;
        case 0x1296d4u: goto label_1296d4;
        default: break;
    }

    ctx->pc = 0x129630u;

    // 0x129630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x129634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x129638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12963c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12963cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129640: 0x8e0315f4  lw          $v1, 0x15F4($s0)
    ctx->pc = 0x129640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x129644: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x129644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x129648: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x129648u;
    {
        const bool branch_taken_0x129648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129648u;
        // 0x12964c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129648) {
            ctx->pc = 0x1296D8u;
            goto label_1296d8;
        }
    }
    ctx->pc = 0x129650u;
    // 0x129650: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x129650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x129654: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x129654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x129658: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x129658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    // 0x12965c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x12965Cu;
    SET_GPR_U32(ctx, 31, 0x129664u);
    ctx->pc = 0x129660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12965Cu;
    // 0x129660: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x12965Cu, 0x129664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129664u;
label_129664:
    // 0x129664: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x129664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129668: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x129668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12966c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12966Cu;
    {
        const bool branch_taken_0x12966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12966Cu;
        // 0x129670: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12966c) {
            ctx->pc = 0x12968Cu;
            goto label_12968c;
        }
    }
    ctx->pc = 0x129674u;
    // 0x129674: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x129674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x129678: 0x2442cd70  addiu       $v0, $v0, -0x3290
    ctx->pc = 0x129678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
    // 0x12967c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129680: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x129680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129684: 0x800008  jr          $a0
    ctx->pc = 0x129684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12968Cu: goto label_12968c;
            case 0x1296B4u: goto label_1296b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129684u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12968Cu;
label_12968c:
    // 0x12968c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12968cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x129690: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x129694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129698: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x129698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x12969c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12969cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296a0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1296a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1296a4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1296A4u;
    SET_GPR_U32(ctx, 31, 0x1296ACu);
    ctx->pc = 0x1296A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1296A4u;
    // 0x1296a8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1296A4u, 0x1296ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1296ACu;
label_1296ac:
    // 0x1296ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1296ACu;
    {
        const bool branch_taken_0x1296ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296ACu;
        // 0x1296b0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296ac) {
            ctx->pc = 0x1296D8u;
            goto label_1296d8;
        }
    }
    ctx->pc = 0x1296B4u;
label_1296b4:
    // 0x1296b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1296b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1296b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1296b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1296bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296c0: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x1296c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x1296c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1296c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1296c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1296cc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1296CCu;
    SET_GPR_U32(ctx, 31, 0x1296D4u);
    ctx->pc = 0x1296D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1296CCu;
    // 0x1296d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1296CCu, 0x1296D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1296D4u;
label_1296d4:
    // 0x1296d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1296d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1296d8:
    // 0x1296d8: 0x3c04ffbf  lui         $a0, 0xFFBF
    ctx->pc = 0x1296d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65471 << 16));
    // 0x1296dc: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x1296dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    // 0x1296e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1296e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1296e4: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x1296e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1296e8: 0x8ca300ac  lw          $v1, 0xAC($a1)
    ctx->pc = 0x1296e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
    // 0x1296ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1296ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1296f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1296f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1296f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1296f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1296f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1296f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1296fc: 0xaca200b0  sw          $v0, 0xB0($a1)
    ctx->pc = 0x1296fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 2));
    // 0x129700: 0xaca300ac  sw          $v1, 0xAC($a1)
    ctx->pc = 0x129700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 3));
    // 0x129704: 0x3e00008  jr          $ra
    ctx->pc = 0x129704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129704u;
        // 0x129708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12970Cu;
    // 0x12970c: 0x0  nop
    ctx->pc = 0x12970cu;
    // NOP
    // 0x129710: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x129710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129714: 0x0  nop
    ctx->pc = 0x129714u;
    // NOP
    ctx->pc = 0x129718u;
}
