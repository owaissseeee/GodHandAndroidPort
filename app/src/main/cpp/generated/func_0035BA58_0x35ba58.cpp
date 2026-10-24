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

// Function: func_0035BA58
// Address: 0x35ba58 - 0x35bb08
void func_0035BA58_0x35ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BA58_0x35ba58");
#endif

    switch (ctx->pc) {
        case 0x35ba58u: goto label_35ba58;
        case 0x35ba5cu: goto label_35ba5c;
        case 0x35ba60u: goto label_35ba60;
        case 0x35ba64u: goto label_35ba64;
        case 0x35ba68u: goto label_35ba68;
        case 0x35ba6cu: goto label_35ba6c;
        case 0x35ba70u: goto label_35ba70;
        case 0x35ba74u: goto label_35ba74;
        case 0x35ba78u: goto label_35ba78;
        case 0x35ba7cu: goto label_35ba7c;
        case 0x35ba80u: goto label_35ba80;
        case 0x35ba84u: goto label_35ba84;
        case 0x35ba88u: goto label_35ba88;
        case 0x35ba8cu: goto label_35ba8c;
        case 0x35ba90u: goto label_35ba90;
        case 0x35ba94u: goto label_35ba94;
        case 0x35ba98u: goto label_35ba98;
        case 0x35ba9cu: goto label_35ba9c;
        case 0x35baa0u: goto label_35baa0;
        case 0x35baa4u: goto label_35baa4;
        case 0x35baa8u: goto label_35baa8;
        case 0x35baacu: goto label_35baac;
        case 0x35bab0u: goto label_35bab0;
        case 0x35bab4u: goto label_35bab4;
        case 0x35bab8u: goto label_35bab8;
        case 0x35babcu: goto label_35babc;
        case 0x35bac0u: goto label_35bac0;
        case 0x35bac4u: goto label_35bac4;
        case 0x35bac8u: goto label_35bac8;
        case 0x35baccu: goto label_35bacc;
        case 0x35bad0u: goto label_35bad0;
        case 0x35bad4u: goto label_35bad4;
        case 0x35bad8u: goto label_35bad8;
        case 0x35badcu: goto label_35badc;
        case 0x35bae0u: goto label_35bae0;
        case 0x35bae4u: goto label_35bae4;
        case 0x35bae8u: goto label_35bae8;
        case 0x35baecu: goto label_35baec;
        case 0x35baf0u: goto label_35baf0;
        case 0x35baf4u: goto label_35baf4;
        case 0x35baf8u: goto label_35baf8;
        case 0x35bafcu: goto label_35bafc;
        case 0x35bb00u: goto label_35bb00;
        case 0x35bb04u: goto label_35bb04;
        default: break;
    }

    ctx->pc = 0x35ba58u;

label_35ba58:
    // 0x35ba58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35ba5c:
    // 0x35ba5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35ba60:
    // 0x35ba60: 0xc0d8310  jal         func_360C40
label_35ba64:
    if (ctx->pc == 0x35BA64u) {
        ctx->pc = 0x35BA68u;
        goto label_35ba68;
    }
    ctx->pc = 0x35BA60u;
    SET_GPR_U32(ctx, 31, 0x35BA68u);
    ctx->pc = 0x360C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360C40u, 0x35BA60u, 0x35BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA68u;
label_35ba68:
    // 0x35ba68: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_35ba6c:
    // 0x35ba6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_35ba70:
    if (ctx->pc == 0x35BA70u) {
        ctx->pc = 0x35BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA6Cu;
        // 0x35ba70: 0x2463e0c0  addiu       $v1, $v1, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BA74u;
        goto label_35ba74;
    }
    ctx->pc = 0x35BA6Cu;
    {
        const bool branch_taken_0x35ba6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA6Cu;
        // 0x35ba70: 0x2463e0c0  addiu       $v1, $v1, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba6c) {
            ctx->pc = 0x35BA90u;
            goto label_35ba90;
        }
    }
    ctx->pc = 0x35BA74u;
label_35ba74:
    // 0x35ba74: 0xc0d8316  jal         func_360C58
label_35ba78:
    if (ctx->pc == 0x35BA78u) {
        ctx->pc = 0x35BA7Cu;
        goto label_35ba7c;
    }
    ctx->pc = 0x35BA74u;
    SET_GPR_U32(ctx, 31, 0x35BA7Cu);
    ctx->pc = 0x360C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360C58u, 0x35BA74u, 0x35BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA7Cu;
label_35ba7c:
    // 0x35ba7c: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x35ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_35ba80:
    // 0x35ba80: 0xc0d82c6  jal         func_360B18
label_35ba84:
    if (ctx->pc == 0x35BA84u) {
        ctx->pc = 0x35BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA80u;
        // 0x35ba84: 0xfc626c80  sd          $v0, 0x6C80($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 27776), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BA88u;
        goto label_35ba88;
    }
    ctx->pc = 0x35BA80u;
    SET_GPR_U32(ctx, 31, 0x35BA88u);
    ctx->pc = 0x35BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA80u;
    // 0x35ba84: 0xfc626c80  sd          $v0, 0x6C80($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 27776), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B18u, 0x35BA80u, 0x35BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA88u;
label_35ba88:
    // 0x35ba88: 0x1000001d  b           . + 4 + (0x1D << 2)
label_35ba8c:
    if (ctx->pc == 0x35BA8Cu) {
        ctx->pc = 0x35BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA88u;
        // 0x35ba8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BA90u;
        goto label_35ba90;
    }
    ctx->pc = 0x35BA88u;
    {
        const bool branch_taken_0x35ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA88u;
        // 0x35ba8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba88) {
            ctx->pc = 0x35BB00u;
            goto label_35bb00;
        }
    }
    ctx->pc = 0x35BA90u;
label_35ba90:
    // 0x35ba90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_35ba94:
    // 0x35ba94: 0x8c44e0b8  lw          $a0, -0x1F48($v0)
    ctx->pc = 0x35ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959288)));
label_35ba98:
    // 0x35ba98: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_35ba9c:
    if (ctx->pc == 0x35BA9Cu) {
        ctx->pc = 0x35BAA0u;
        goto label_35baa0;
    }
    ctx->pc = 0x35BA98u;
    {
        const bool branch_taken_0x35ba98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba98) {
            ctx->pc = 0x35BAD8u;
            goto label_35bad8;
        }
    }
    ctx->pc = 0x35BAA0u;
label_35baa0:
    // 0x35baa0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x35baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_35baa4:
    // 0x35baa4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_35baa8:
    if (ctx->pc == 0x35BAA8u) {
        ctx->pc = 0x35BAACu;
        goto label_35baac;
    }
    ctx->pc = 0x35BAA4u;
    {
        const bool branch_taken_0x35baa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35baa4) {
            ctx->pc = 0x35BAD8u;
            goto label_35bad8;
        }
    }
    ctx->pc = 0x35BAACu;
label_35baac:
    // 0x35baac: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x35baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_35bab0:
    // 0x35bab0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_35bab4:
    if (ctx->pc == 0x35BAB4u) {
        ctx->pc = 0x35BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAB0u;
        // 0x35bab4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BAB8u;
        goto label_35bab8;
    }
    ctx->pc = 0x35BAB0u;
    {
        const bool branch_taken_0x35bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAB0u;
        // 0x35bab4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bab0) {
            ctx->pc = 0x35BAD8u;
            goto label_35bad8;
        }
    }
    ctx->pc = 0x35BAB8u;
label_35bab8:
    // 0x35bab8: 0x8c841018  lw          $a0, 0x1018($a0)
    ctx->pc = 0x35bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4120)));
label_35babc:
    // 0x35babc: 0x40f809  jalr        $v0
label_35bac0:
    if (ctx->pc == 0x35BAC0u) {
        ctx->pc = 0x35BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BABCu;
        // 0x35bac0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BAC4u;
        goto label_35bac4;
    }
    ctx->pc = 0x35BABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35BAC4u);
        ctx->pc = 0x35BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BABCu;
        // 0x35bac0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BABCu, 0x35BAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35BAC4u;
label_35bac4:
    // 0x35bac4: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x35bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
label_35bac8:
    // 0x35bac8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x35bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35bacc:
    // 0x35bacc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35bad0:
    // 0x35bad0: 0x1000000a  b           . + 4 + (0xA << 2)
label_35bad4:
    if (ctx->pc == 0x35BAD4u) {
        ctx->pc = 0x35BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAD0u;
        // 0x35bad4: 0xfc836c80  sd          $v1, 0x6C80($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 27776), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BAD8u;
        goto label_35bad8;
    }
    ctx->pc = 0x35BAD0u;
    {
        const bool branch_taken_0x35bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAD0u;
        // 0x35bad4: 0xfc836c80  sd          $v1, 0x6C80($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 27776), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bad0) {
            ctx->pc = 0x35BAFCu;
            goto label_35bafc;
        }
    }
    ctx->pc = 0x35BAD8u;
label_35bad8:
    // 0x35bad8: 0x8c6401b0  lw          $a0, 0x1B0($v1)
    ctx->pc = 0x35bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_35badc:
    // 0x35badc: 0x8c6501b8  lw          $a1, 0x1B8($v1)
    ctx->pc = 0x35badcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
label_35bae0:
    // 0x35bae0: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x35bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_35bae4:
    // 0x35bae4: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x35bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_35bae8:
    // 0x35bae8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_35baec:
    // 0x35baec: 0xfc656c80  sd          $a1, 0x6C80($v1)
    ctx->pc = 0x35baecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 27776), GPR_U64(ctx, 5));
label_35baf0:
    // 0x35baf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35baf4:
    // 0x35baf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_35baf8:
    // 0x35baf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_35bafc:
    // 0x35bafc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35bafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35bb00:
    // 0x35bb00: 0x3e00008  jr          $ra
label_35bb04:
    if (ctx->pc == 0x35BB04u) {
        ctx->pc = 0x35BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB00u;
        // 0x35bb04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BB08u;
        goto label_fallthrough_0x35bb00;
    }
    ctx->pc = 0x35BB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB00u;
        // 0x35bb04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35bb00:
    ctx->pc = 0x35BB08u;
}
