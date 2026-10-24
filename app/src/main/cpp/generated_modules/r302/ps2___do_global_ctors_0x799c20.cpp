#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: __do_global_ctors
// Address: 0x799c20 - 0x799cd0
void ps2___do_global_ctors_0x799c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799c20");
#endif

    switch (ctx->pc) {
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca0u: goto label_799ca0;
        case 0x799ca4u: goto label_799ca4;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cacu: goto label_799cac;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cb8u: goto label_799cb8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cc4u: goto label_799cc4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cccu: goto label_799ccc;
        default: break;
    }

    ctx->pc = 0x799c20u;

label_799c20:
    // 0x799c20: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799c24:
    // 0x799c24: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799c28:
    // 0x799c28: 0x8ce59f00  lw          $a1, -0x6100($a3)
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294942464)));
label_799c2c:
    // 0x799c2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799c30:
    // 0x799c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799c34:
    // 0x799c34: 0x24e39f00  addiu       $v1, $a3, -0x6100
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942464));
label_799c38:
    // 0x799c38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799c3c:
    // 0x799c3c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799c40:
    if (ctx->pc == 0x799C40u) {
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C44u;
        goto label_799c44;
    }
    ctx->pc = 0x799C3Cu;
    {
        const bool branch_taken_0x799c3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c3c) {
            ctx->pc = 0x799C84u;
            goto label_799c84;
        }
    }
    ctx->pc = 0x799C44u;
label_799c44:
    // 0x799c44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799c48:
    // 0x799c48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799c4c:
    if (ctx->pc == 0x799C4Cu) {
        ctx->pc = 0x799C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C48u;
        // 0x799c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C50u;
        goto label_799c50;
    }
    ctx->pc = 0x799C48u;
    {
        const bool branch_taken_0x799c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C48u;
        // 0x799c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c48) {
            ctx->pc = 0x799C84u;
            goto label_799c84;
        }
    }
    ctx->pc = 0x799C50u;
label_799c50:
    // 0x799c50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c54:
    // 0x799c54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799c58:
    // 0x799c58: 0x24e49f00  addiu       $a0, $a3, -0x6100
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942464));
label_799c5c:
    // 0x799c5c: 0x0  nop
    ctx->pc = 0x799c5cu;
    // NOP
label_799c60:
    // 0x799c60: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799c60u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799c64:
    // 0x799c64: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799c68:
    // 0x799c68: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799c6c:
    // 0x799c6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799c6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799c70:
    // 0x799c70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799c74:
    // 0x799c74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799c78:
    // 0x799c78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799c7c:
    // 0x799c7c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799c80:
    if (ctx->pc == 0x799C80u) {
        ctx->pc = 0x799C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C7Cu;
        // 0x799c80: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C84u;
        goto label_799c84;
    }
    ctx->pc = 0x799C7Cu;
    {
        const bool branch_taken_0x799c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c7c) {
            ctx->pc = 0x799C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C7Cu;
            // 0x799c80: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c60;
        }
    }
    ctx->pc = 0x799C84u;
label_799c84:
    // 0x799c84: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799c84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799c88:
    // 0x799c88: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799c88u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799c8c:
    // 0x799c8c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799c90:
    if (ctx->pc == 0x799C90u) {
        ctx->pc = 0x799C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C8Cu;
        // 0x799c90: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C94u;
        goto label_799c94;
    }
    ctx->pc = 0x799C8Cu;
    {
        const bool branch_taken_0x799c8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C8Cu;
        // 0x799c90: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c8c) {
            ctx->pc = 0x799CBCu;
            goto label_799cbc;
        }
    }
    ctx->pc = 0x799C94u;
label_799c94:
    // 0x799c94: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799c98:
    // 0x799c98: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_799c9c:
    // 0x799c9c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799ca0:
    // 0x799ca0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799ca4:
    // 0x799ca4: 0x0  nop
    ctx->pc = 0x799ca4u;
    // NOP
label_799ca8:
    // 0x799ca8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799cac:
    // 0x799cac: 0x40f809  jalr        $v0
label_799cb0:
    if (ctx->pc == 0x799CB0u) {
        ctx->pc = 0x799CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CACu;
        // 0x799cb0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CB4u;
        goto label_799cb4;
    }
    ctx->pc = 0x799CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799CB4u);
        ctx->pc = 0x799CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CACu;
        // 0x799cb0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CACu, 0x799CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799CB4u;
label_799cb4:
    // 0x799cb4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799cb8:
    if (ctx->pc == 0x799CB8u) {
        ctx->pc = 0x799CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB4u;
        // 0x799cb8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CBCu;
        goto label_799cbc;
    }
    ctx->pc = 0x799CB4u;
    {
        const bool branch_taken_0x799cb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799cb4) {
            ctx->pc = 0x799CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CB4u;
            // 0x799cb8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ca8;
        }
    }
    ctx->pc = 0x799CBCu;
label_799cbc:
    // 0x799cbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799cc0:
    // 0x799cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799cc4:
    // 0x799cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799cc8:
    // 0x799cc8: 0x3e00008  jr          $ra
label_799ccc:
    if (ctx->pc == 0x799CCCu) {
        ctx->pc = 0x799CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC8u;
        // 0x799ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CD0u;
        goto label_fallthrough_0x799cc8;
    }
    ctx->pc = 0x799CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC8u;
        // 0x799ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799cc8:
    ctx->pc = 0x799CD0u;
}
} // namespace gh_r302
