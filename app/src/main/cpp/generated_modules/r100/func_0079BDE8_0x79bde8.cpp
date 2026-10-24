#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079BDE8
// Address: 0x79bde8 - 0x79bfb0
void func_0079BDE8_0x79bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BDE8_0x79bde8");
#endif

    switch (ctx->pc) {
        case 0x79bde8u: goto label_79bde8;
        case 0x79bdecu: goto label_79bdec;
        case 0x79bdf0u: goto label_79bdf0;
        case 0x79bdf4u: goto label_79bdf4;
        case 0x79bdf8u: goto label_79bdf8;
        case 0x79bdfcu: goto label_79bdfc;
        case 0x79be00u: goto label_79be00;
        case 0x79be04u: goto label_79be04;
        case 0x79be08u: goto label_79be08;
        case 0x79be0cu: goto label_79be0c;
        case 0x79be10u: goto label_79be10;
        case 0x79be14u: goto label_79be14;
        case 0x79be18u: goto label_79be18;
        case 0x79be1cu: goto label_79be1c;
        case 0x79be20u: goto label_79be20;
        case 0x79be24u: goto label_79be24;
        case 0x79be28u: goto label_79be28;
        case 0x79be2cu: goto label_79be2c;
        case 0x79be30u: goto label_79be30;
        case 0x79be34u: goto label_79be34;
        case 0x79be38u: goto label_79be38;
        case 0x79be3cu: goto label_79be3c;
        case 0x79be40u: goto label_79be40;
        case 0x79be44u: goto label_79be44;
        case 0x79be48u: goto label_79be48;
        case 0x79be4cu: goto label_79be4c;
        case 0x79be50u: goto label_79be50;
        case 0x79be54u: goto label_79be54;
        case 0x79be58u: goto label_79be58;
        case 0x79be5cu: goto label_79be5c;
        case 0x79be60u: goto label_79be60;
        case 0x79be64u: goto label_79be64;
        case 0x79be68u: goto label_79be68;
        case 0x79be6cu: goto label_79be6c;
        case 0x79be70u: goto label_79be70;
        case 0x79be74u: goto label_79be74;
        case 0x79be78u: goto label_79be78;
        case 0x79be7cu: goto label_79be7c;
        case 0x79be80u: goto label_79be80;
        case 0x79be84u: goto label_79be84;
        case 0x79be88u: goto label_79be88;
        case 0x79be8cu: goto label_79be8c;
        case 0x79be90u: goto label_79be90;
        case 0x79be94u: goto label_79be94;
        case 0x79be98u: goto label_79be98;
        case 0x79be9cu: goto label_79be9c;
        case 0x79bea0u: goto label_79bea0;
        case 0x79bea4u: goto label_79bea4;
        case 0x79bea8u: goto label_79bea8;
        case 0x79beacu: goto label_79beac;
        case 0x79beb0u: goto label_79beb0;
        case 0x79beb4u: goto label_79beb4;
        case 0x79beb8u: goto label_79beb8;
        case 0x79bebcu: goto label_79bebc;
        case 0x79bec0u: goto label_79bec0;
        case 0x79bec4u: goto label_79bec4;
        case 0x79bec8u: goto label_79bec8;
        case 0x79beccu: goto label_79becc;
        case 0x79bed0u: goto label_79bed0;
        case 0x79bed4u: goto label_79bed4;
        case 0x79bed8u: goto label_79bed8;
        case 0x79bedcu: goto label_79bedc;
        case 0x79bee0u: goto label_79bee0;
        case 0x79bee4u: goto label_79bee4;
        case 0x79bee8u: goto label_79bee8;
        case 0x79beecu: goto label_79beec;
        case 0x79bef0u: goto label_79bef0;
        case 0x79bef4u: goto label_79bef4;
        case 0x79bef8u: goto label_79bef8;
        case 0x79befcu: goto label_79befc;
        case 0x79bf00u: goto label_79bf00;
        case 0x79bf04u: goto label_79bf04;
        case 0x79bf08u: goto label_79bf08;
        case 0x79bf0cu: goto label_79bf0c;
        case 0x79bf10u: goto label_79bf10;
        case 0x79bf14u: goto label_79bf14;
        case 0x79bf18u: goto label_79bf18;
        case 0x79bf1cu: goto label_79bf1c;
        case 0x79bf20u: goto label_79bf20;
        case 0x79bf24u: goto label_79bf24;
        case 0x79bf28u: goto label_79bf28;
        case 0x79bf2cu: goto label_79bf2c;
        case 0x79bf30u: goto label_79bf30;
        case 0x79bf34u: goto label_79bf34;
        case 0x79bf38u: goto label_79bf38;
        case 0x79bf3cu: goto label_79bf3c;
        case 0x79bf40u: goto label_79bf40;
        case 0x79bf44u: goto label_79bf44;
        case 0x79bf48u: goto label_79bf48;
        case 0x79bf4cu: goto label_79bf4c;
        case 0x79bf50u: goto label_79bf50;
        case 0x79bf54u: goto label_79bf54;
        case 0x79bf58u: goto label_79bf58;
        case 0x79bf5cu: goto label_79bf5c;
        case 0x79bf60u: goto label_79bf60;
        case 0x79bf64u: goto label_79bf64;
        case 0x79bf68u: goto label_79bf68;
        case 0x79bf6cu: goto label_79bf6c;
        case 0x79bf70u: goto label_79bf70;
        case 0x79bf74u: goto label_79bf74;
        case 0x79bf78u: goto label_79bf78;
        case 0x79bf7cu: goto label_79bf7c;
        case 0x79bf80u: goto label_79bf80;
        case 0x79bf84u: goto label_79bf84;
        case 0x79bf88u: goto label_79bf88;
        case 0x79bf8cu: goto label_79bf8c;
        case 0x79bf90u: goto label_79bf90;
        case 0x79bf94u: goto label_79bf94;
        case 0x79bf98u: goto label_79bf98;
        case 0x79bf9cu: goto label_79bf9c;
        case 0x79bfa0u: goto label_79bfa0;
        case 0x79bfa4u: goto label_79bfa4;
        case 0x79bfa8u: goto label_79bfa8;
        case 0x79bfacu: goto label_79bfac;
        default: break;
    }

    ctx->pc = 0x79bde8u;

label_79bde8:
    // 0x79bde8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79bde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_79bdec:
    // 0x79bdec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79bdf0:
    // 0x79bdf0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_79bdf4:
    // 0x79bdf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bdf8:
    // 0x79bdf8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79bdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_79bdfc:
    // 0x79bdfc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_79be00:
    // 0x79be00: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x79be00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79be04:
    // 0x79be04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_79be08:
    // 0x79be08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_79be0c:
    // 0x79be0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79be10:
    // 0x79be10: 0xc0b56a8  jal         func_2D5AA0
label_79be14:
    if (ctx->pc == 0x79BE14u) {
        ctx->pc = 0x79BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE10u;
        // 0x79be14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE18u;
        goto label_79be18;
    }
    ctx->pc = 0x79BE10u;
    SET_GPR_U32(ctx, 31, 0x79BE18u);
    ctx->pc = 0x79BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE10u;
    // 0x79be14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BE10u, 0x79BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE18u;
label_79be18:
    // 0x79be18: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x79be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79be1c:
    // 0x79be1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79be20:
    // 0x79be20: 0xc0a572a  jal         func_295CA8
label_79be24:
    if (ctx->pc == 0x79BE24u) {
        ctx->pc = 0x79BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE20u;
        // 0x79be24: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE28u;
        goto label_79be28;
    }
    ctx->pc = 0x79BE20u;
    SET_GPR_U32(ctx, 31, 0x79BE28u);
    ctx->pc = 0x79BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE20u;
    // 0x79be24: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BE20u, 0x79BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE28u;
label_79be28:
    // 0x79be28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79be2c:
    // 0x79be2c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_79be30:
    if (ctx->pc == 0x79BE30u) {
        ctx->pc = 0x79BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE2Cu;
        // 0x79be30: 0x3c11005f  lui         $s1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE34u;
        goto label_79be34;
    }
    ctx->pc = 0x79BE2Cu;
    {
        const bool branch_taken_0x79be2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE2Cu;
        // 0x79be30: 0x3c11005f  lui         $s1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be2c) {
            ctx->pc = 0x79BE48u;
            goto label_79be48;
        }
    }
    ctx->pc = 0x79BE34u;
label_79be34:
    // 0x79be34: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79be38:
    // 0x79be38: 0xc0b5692  jal         func_2D5A48
label_79be3c:
    if (ctx->pc == 0x79BE3Cu) {
        ctx->pc = 0x79BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE38u;
        // 0x79be3c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE40u;
        goto label_79be40;
    }
    ctx->pc = 0x79BE38u;
    SET_GPR_U32(ctx, 31, 0x79BE40u);
    ctx->pc = 0x79BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE38u;
    // 0x79be3c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BE38u, 0x79BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE40u;
label_79be40:
    // 0x79be40: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79be40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
label_79be44:
    // 0x79be44: 0x0  nop
    ctx->pc = 0x79be44u;
    // NOP
label_79be48:
    // 0x79be48: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x79be48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
label_79be4c:
    // 0x79be4c: 0x10000004  b           . + 4 + (0x4 << 2)
label_79be50:
    if (ctx->pc == 0x79BE50u) {
        ctx->pc = 0x79BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE4Cu;
        // 0x79be50: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE54u;
        goto label_79be54;
    }
    ctx->pc = 0x79BE4Cu;
    {
        const bool branch_taken_0x79be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE4Cu;
        // 0x79be50: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be4c) {
            ctx->pc = 0x79BE60u;
            goto label_79be60;
        }
    }
    ctx->pc = 0x79BE54u;
label_79be54:
    // 0x79be54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79be58:
    // 0x79be58: 0xc0b56a8  jal         func_2D5AA0
label_79be5c:
    if (ctx->pc == 0x79BE5Cu) {
        ctx->pc = 0x79BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE58u;
        // 0x79be5c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE60u;
        goto label_79be60;
    }
    ctx->pc = 0x79BE58u;
    SET_GPR_U32(ctx, 31, 0x79BE60u);
    ctx->pc = 0x79BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE58u;
    // 0x79be5c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BE58u, 0x79BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE60u;
label_79be60:
    // 0x79be60: 0xc1e6f4c  jal         func_79BD30
label_79be64:
    if (ctx->pc == 0x79BE64u) {
        ctx->pc = 0x79BE68u;
        goto label_79be68;
    }
    ctx->pc = 0x79BE60u;
    SET_GPR_U32(ctx, 31, 0x79BE68u);
    ctx->pc = 0x79BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD30u, 0x79BE60u, 0x79BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE68u;
label_79be68:
    // 0x79be68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79be68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79be6c:
    // 0x79be6c: 0x10c0fff9  beqz        $a2, . + 4 + (-0x7 << 2)
label_79be70:
    if (ctx->pc == 0x79BE70u) {
        ctx->pc = 0x79BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE6Cu;
        // 0x79be70: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE74u;
        goto label_79be74;
    }
    ctx->pc = 0x79BE6Cu;
    {
        const bool branch_taken_0x79be6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE6Cu;
        // 0x79be70: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be6c) {
            ctx->pc = 0x79BE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79be54;
        }
    }
    ctx->pc = 0x79BE74u;
label_79be74:
    // 0x79be74: 0xc09cd90  jal         func_273640
label_79be78:
    if (ctx->pc == 0x79BE78u) {
        ctx->pc = 0x79BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE74u;
        // 0x79be78: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE7Cu;
        goto label_79be7c;
    }
    ctx->pc = 0x79BE74u;
    SET_GPR_U32(ctx, 31, 0x79BE7Cu);
    ctx->pc = 0x79BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE74u;
    // 0x79be78: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273640u, 0x79BE74u, 0x79BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE7Cu;
label_79be7c:
    // 0x79be7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79be80:
    // 0x79be80: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
label_79be84:
    if (ctx->pc == 0x79BE84u) {
        ctx->pc = 0x79BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE80u;
        // 0x79be84: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE88u;
        goto label_79be88;
    }
    ctx->pc = 0x79BE80u;
    {
        const bool branch_taken_0x79be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE80u;
        // 0x79be84: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be80) {
            ctx->pc = 0x79BE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79be54;
        }
    }
    ctx->pc = 0x79BE88u;
label_79be88:
    // 0x79be88: 0x8e258658  lw          $a1, -0x79A8($s1)
    ctx->pc = 0x79be88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
label_79be8c:
    // 0x79be8c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x79be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_79be90:
    // 0x79be90: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x79be90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_79be94:
    // 0x79be94: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79be94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_79be98:
    // 0x79be98: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79be9c:
    // 0x79be9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79bea0:
    // 0x79bea0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x79bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_79bea4:
    // 0x79bea4: 0x8e437a8c  lw          $v1, 0x7A8C($s2)
    ctx->pc = 0x79bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
label_79bea8:
    // 0x79bea8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79bea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_79beac:
    // 0x79beac: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x79beacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79beb0:
    // 0x79beb0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_79beb4:
    if (ctx->pc == 0x79BEB4u) {
        ctx->pc = 0x79BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEB0u;
        // 0x79beb4: 0xae437a8c  sw          $v1, 0x7A8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEB8u;
        goto label_79beb8;
    }
    ctx->pc = 0x79BEB0u;
    {
        const bool branch_taken_0x79beb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEB0u;
        // 0x79beb4: 0xae437a8c  sw          $v1, 0x7A8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79beb0) {
            ctx->pc = 0x79BEDCu;
            goto label_79bedc;
        }
    }
    ctx->pc = 0x79BEB8u;
label_79beb8:
    // 0x79beb8: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x79beb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
label_79bebc:
    // 0x79bebc: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79bec0:
    // 0x79bec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bec4:
    // 0x79bec4: 0xc0b56a8  jal         func_2D5AA0
label_79bec8:
    if (ctx->pc == 0x79BEC8u) {
        ctx->pc = 0x79BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEC4u;
        // 0x79bec8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BECCu;
        goto label_79becc;
    }
    ctx->pc = 0x79BEC4u;
    SET_GPR_U32(ctx, 31, 0x79BECCu);
    ctx->pc = 0x79BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEC4u;
    // 0x79bec8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BEC4u, 0x79BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BECCu;
label_79becc:
    // 0x79becc: 0x8e427a8c  lw          $v0, 0x7A8C($s2)
    ctx->pc = 0x79beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
label_79bed0:
    // 0x79bed0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x79bed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_79bed4:
    // 0x79bed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79bed8:
    if (ctx->pc == 0x79BED8u) {
        ctx->pc = 0x79BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BED4u;
        // 0x79bed8: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEDCu;
        goto label_79bedc;
    }
    ctx->pc = 0x79BED4u;
    {
        const bool branch_taken_0x79bed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BED4u;
        // 0x79bed8: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bed4) {
            ctx->pc = 0x79BEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bec0;
        }
    }
    ctx->pc = 0x79BEDCu;
label_79bedc:
    // 0x79bedc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79bee0:
    // 0x79bee0: 0xc0b0e6c  jal         func_2C39B0
label_79bee4:
    if (ctx->pc == 0x79BEE4u) {
        ctx->pc = 0x79BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE0u;
        // 0x79bee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEE8u;
        goto label_79bee8;
    }
    ctx->pc = 0x79BEE0u;
    SET_GPR_U32(ctx, 31, 0x79BEE8u);
    ctx->pc = 0x79BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEE0u;
    // 0x79bee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79BEE0u, 0x79BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEE8u;
label_79bee8:
    // 0x79bee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79bee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79beec:
    // 0x79beec: 0xc0a56f0  jal         func_295BC0
label_79bef0:
    if (ctx->pc == 0x79BEF0u) {
        ctx->pc = 0x79BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEECu;
        // 0x79bef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEF4u;
        goto label_79bef4;
    }
    ctx->pc = 0x79BEECu;
    SET_GPR_U32(ctx, 31, 0x79BEF4u);
    ctx->pc = 0x79BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEECu;
    // 0x79bef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79BEECu, 0x79BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEF4u;
label_79bef4:
    // 0x79bef4: 0xc1e6f4c  jal         func_79BD30
label_79bef8:
    if (ctx->pc == 0x79BEF8u) {
        ctx->pc = 0x79BEFCu;
        goto label_79befc;
    }
    ctx->pc = 0x79BEF4u;
    SET_GPR_U32(ctx, 31, 0x79BEFCu);
    ctx->pc = 0x79BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD30u, 0x79BEF4u, 0x79BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEFCu;
label_79befc:
    // 0x79befc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79befcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bf00:
    // 0x79bf00: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_79bf04:
    if (ctx->pc == 0x79BF04u) {
        ctx->pc = 0x79BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF00u;
        // 0x79bf04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF08u;
        goto label_79bf08;
    }
    ctx->pc = 0x79BF00u;
    {
        const bool branch_taken_0x79bf00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF00u;
        // 0x79bf04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf00) {
            ctx->pc = 0x79BF34u;
            goto label_79bf34;
        }
    }
    ctx->pc = 0x79BF08u;
label_79bf08:
    // 0x79bf08: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x79bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_79bf0c:
    // 0x79bf0c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x79bf0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_79bf10:
    // 0x79bf10: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x79bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_79bf14:
    // 0x79bf14: 0x60f809  jalr        $v1
label_79bf18:
    if (ctx->pc == 0x79BF18u) {
        ctx->pc = 0x79BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF14u;
        // 0x79bf18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF1Cu;
        goto label_79bf1c;
    }
    ctx->pc = 0x79BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79BF1Cu);
        ctx->pc = 0x79BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF14u;
        // 0x79bf18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF14u, 0x79BF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BF1Cu;
label_79bf1c:
    // 0x79bf1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_79bf20:
    if (ctx->pc == 0x79BF20u) {
        ctx->pc = 0x79BF24u;
        goto label_79bf24;
    }
    ctx->pc = 0x79BF1Cu;
    {
        const bool branch_taken_0x79bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bf1c) {
            ctx->pc = 0x79BF34u;
            goto label_79bf34;
        }
    }
    ctx->pc = 0x79BF24u;
label_79bf24:
    // 0x79bf24: 0x0  nop
    ctx->pc = 0x79bf24u;
    // NOP
label_79bf28:
    // 0x79bf28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bf2c:
    // 0x79bf2c: 0xc0b56a8  jal         func_2D5AA0
label_79bf30:
    if (ctx->pc == 0x79BF30u) {
        ctx->pc = 0x79BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF2Cu;
        // 0x79bf30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF34u;
        goto label_79bf34;
    }
    ctx->pc = 0x79BF2Cu;
    SET_GPR_U32(ctx, 31, 0x79BF34u);
    ctx->pc = 0x79BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF2Cu;
    // 0x79bf30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BF2Cu, 0x79BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF34u;
label_79bf34:
    // 0x79bf34: 0xc1e6f4c  jal         func_79BD30
label_79bf38:
    if (ctx->pc == 0x79BF38u) {
        ctx->pc = 0x79BF3Cu;
        goto label_79bf3c;
    }
    ctx->pc = 0x79BF34u;
    SET_GPR_U32(ctx, 31, 0x79BF3Cu);
    ctx->pc = 0x79BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD30u, 0x79BF34u, 0x79BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF3Cu;
label_79bf3c:
    // 0x79bf3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79bf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bf40:
    // 0x79bf40: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_79bf44:
    if (ctx->pc == 0x79BF44u) {
        ctx->pc = 0x79BF48u;
        goto label_79bf48;
    }
    ctx->pc = 0x79BF40u;
    {
        const bool branch_taken_0x79bf40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bf40) {
            ctx->pc = 0x79BF58u;
            goto label_79bf58;
        }
    }
    ctx->pc = 0x79BF48u;
label_79bf48:
    // 0x79bf48: 0xc09cd90  jal         func_273640
label_79bf4c:
    if (ctx->pc == 0x79BF4Cu) {
        ctx->pc = 0x79BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF48u;
        // 0x79bf4c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF50u;
        goto label_79bf50;
    }
    ctx->pc = 0x79BF48u;
    SET_GPR_U32(ctx, 31, 0x79BF50u);
    ctx->pc = 0x79BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF48u;
    // 0x79bf4c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273640u, 0x79BF48u, 0x79BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF50u;
label_79bf50:
    // 0x79bf50: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_79bf54:
    if (ctx->pc == 0x79BF54u) {
        ctx->pc = 0x79BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF50u;
        // 0x79bf54: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF58u;
        goto label_79bf58;
    }
    ctx->pc = 0x79BF50u;
    {
        const bool branch_taken_0x79bf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF50u;
        // 0x79bf54: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf50) {
            ctx->pc = 0x79BF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf28;
        }
    }
    ctx->pc = 0x79BF58u;
label_79bf58:
    // 0x79bf58: 0xc0b0f04  jal         func_2C3C10
label_79bf5c:
    if (ctx->pc == 0x79BF5Cu) {
        ctx->pc = 0x79BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF58u;
        // 0x79bf5c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF60u;
        goto label_79bf60;
    }
    ctx->pc = 0x79BF58u;
    SET_GPR_U32(ctx, 31, 0x79BF60u);
    ctx->pc = 0x79BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF58u;
    // 0x79bf5c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BF58u, 0x79BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF60u;
label_79bf60:
    // 0x79bf60: 0x8e427a8c  lw          $v0, 0x7A8C($s2)
    ctx->pc = 0x79bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
label_79bf64:
    // 0x79bf64: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_79bf68:
    // 0x79bf68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79bf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_79bf6c:
    // 0x79bf6c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79bf70:
    // 0x79bf70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79bf74:
    // 0x79bf74: 0x2665a230  addiu       $a1, $s3, -0x5DD0
    ctx->pc = 0x79bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943280));
label_79bf78:
    // 0x79bf78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bf7c:
    // 0x79bf7c: 0xc0b0e24  jal         func_2C3890
label_79bf80:
    if (ctx->pc == 0x79BF80u) {
        ctx->pc = 0x79BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF7Cu;
        // 0x79bf80: 0xae427a8c  sw          $v0, 0x7A8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF84u;
        goto label_79bf84;
    }
    ctx->pc = 0x79BF7Cu;
    SET_GPR_U32(ctx, 31, 0x79BF84u);
    ctx->pc = 0x79BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF7Cu;
    // 0x79bf80: 0xae427a8c  sw          $v0, 0x7A8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79BF7Cu, 0x79BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF84u;
label_79bf84:
    // 0x79bf84: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79bf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79bf88:
    // 0x79bf88: 0xc0b5692  jal         func_2D5A48
label_79bf8c:
    if (ctx->pc == 0x79BF8Cu) {
        ctx->pc = 0x79BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF88u;
        // 0x79bf8c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF90u;
        goto label_79bf90;
    }
    ctx->pc = 0x79BF88u;
    SET_GPR_U32(ctx, 31, 0x79BF90u);
    ctx->pc = 0x79BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF88u;
    // 0x79bf8c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BF88u, 0x79BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF90u;
label_79bf90:
    // 0x79bf90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79bf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79bf94:
    // 0x79bf94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79bf94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79bf98:
    // 0x79bf98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79bf98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79bf9c:
    // 0x79bf9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79bf9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79bfa0:
    // 0x79bfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79bfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bfa4:
    // 0x79bfa4: 0x3e00008  jr          $ra
label_79bfa8:
    if (ctx->pc == 0x79BFA8u) {
        ctx->pc = 0x79BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFA4u;
        // 0x79bfa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFACu;
        goto label_79bfac;
    }
    ctx->pc = 0x79BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFA4u;
        // 0x79bfa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BFACu;
label_79bfac:
    // 0x79bfac: 0x0  nop
    ctx->pc = 0x79bfacu;
    // NOP
    ctx->pc = 0x79bfb0u;
}
} // namespace gh_r100
