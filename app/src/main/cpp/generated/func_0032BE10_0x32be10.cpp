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

// Function: func_0032BE10
// Address: 0x32be10 - 0x32bf90
void func_0032BE10_0x32be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BE10_0x32be10");
#endif

    switch (ctx->pc) {
        case 0x32be78u: goto label_32be78;
        case 0x32bebcu: goto label_32bebc;
        case 0x32bef8u: goto label_32bef8;
        case 0x32bf0cu: goto label_32bf0c;
        case 0x32bf3cu: goto label_32bf3c;
        case 0x32bf48u: goto label_32bf48;
        default: break;
    }

    ctx->pc = 0x32be10u;

    // 0x32be10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32be14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32be18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32be18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32be20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32be20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32be24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32be28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32be28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32be2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32be30: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x32BE30u;
    {
        const bool branch_taken_0x32be30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE30u;
        // 0x32be34: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be30) {
            ctx->pc = 0x32BE48u;
            goto label_32be48;
        }
    }
    ctx->pc = 0x32BE38u;
    // 0x32be38: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BE38u;
    {
        const bool branch_taken_0x32be38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32be38) {
            ctx->pc = 0x32BE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BE38u;
            // 0x32be3c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE4Cu;
            goto label_32be4c;
        }
    }
    ctx->pc = 0x32BE40u;
    // 0x32be40: 0x601000b  bgez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x32BE40u;
    {
        const bool branch_taken_0x32be40 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x32be40) {
            ctx->pc = 0x32BE70u;
            goto label_32be70;
        }
    }
    ctx->pc = 0x32BE48u;
label_32be48:
    // 0x32be48: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32be48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32be4c:
    // 0x32be4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32be4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32be50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32be50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32be54: 0x24842830  addiu       $a0, $a0, 0x2830
    ctx->pc = 0x32be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10288));
    // 0x32be58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32be58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32be5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32be5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32be60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32be60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32be64: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32BE64u;
    ctx->pc = 0x32BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE64u;
    // 0x32be68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32BE64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BE6Cu;
    // 0x32be6c: 0x0  nop
    ctx->pc = 0x32be6cu;
    // NOP
label_32be70:
    // 0x32be70: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x32BE70u;
    SET_GPR_U32(ctx, 31, 0x32BE78u);
    ctx->pc = 0x32BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE70u;
    // 0x32be74: 0x3c1300ff  lui         $s3, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x32BE70u, 0x32BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE78u;
label_32be78:
    // 0x32be78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32be7c: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x32be7cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32be80: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x32be80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32be84: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x32be84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x32be88: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32be88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32be8c: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x32be8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x32be90: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x32be90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x32be94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32be94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32be98: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32be98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32be9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32bea0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32bea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32bea4: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x32BEA4u;
    {
        const bool branch_taken_0x32bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bea4) {
            ctx->pc = 0x32BEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BEA4u;
            // 0x32bea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BF68u;
            goto label_32bf68;
        }
    }
    ctx->pc = 0x32BEACu;
    // 0x32beac: 0x602002e  bltzl       $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x32BEACu;
    {
        const bool branch_taken_0x32beac = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x32beac) {
            ctx->pc = 0x32BEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BEACu;
            // 0x32beb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BF68u;
            goto label_32bf68;
        }
    }
    ctx->pc = 0x32BEB4u;
    // 0x32beb4: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x32BEB4u;
    SET_GPR_U32(ctx, 31, 0x32BEBCu);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x32BEB4u, 0x32BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BEBCu;
label_32bebc:
    // 0x32bebc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x32bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x32bec0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x32bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x32bec4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32bec8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32becc: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x32beccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32bed0: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x32bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32bed4: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x32bed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x32bed8: 0x32602  srl         $a0, $v1, 24
    ctx->pc = 0x32bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x32bedc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x32bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x32bee0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32bee4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32bee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32bee8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32bee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32beec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32beecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32bef0: 0xc0ce2e4  jal         func_338B90
    ctx->pc = 0x32BEF0u;
    SET_GPR_U32(ctx, 31, 0x32BEF8u);
    ctx->pc = 0x32BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BEF0u;
    // 0x32bef4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B90u, 0x32BEF0u, 0x32BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BEF8u;
label_32bef8:
    // 0x32bef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32befc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32BEFCu;
    {
        const bool branch_taken_0x32befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEFCu;
        // 0x32bf00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32befc) {
            ctx->pc = 0x32BF30u;
            goto label_32bf30;
        }
    }
    ctx->pc = 0x32BF04u;
    // 0x32bf04: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x32BF04u;
    SET_GPR_U32(ctx, 31, 0x32BF0Cu);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32BF04u, 0x32BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF0Cu;
label_32bf0c:
    // 0x32bf0c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32bf10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bf10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bf14: 0x24842860  addiu       $a0, $a0, 0x2860
    ctx->pc = 0x32bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10336));
    // 0x32bf18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bf18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bf1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bf1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bf20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32bf20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32bf24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32bf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bf28: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32BF28u;
    ctx->pc = 0x32BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF28u;
    // 0x32bf2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32BF28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BF30u;
label_32bf30:
    // 0x32bf30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bf34: 0xc0ca6d8  jal         func_329B60
    ctx->pc = 0x32BF34u;
    SET_GPR_U32(ctx, 31, 0x32BF3Cu);
    ctx->pc = 0x32BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF34u;
    // 0x32bf38: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329B60u, 0x32BF34u, 0x32BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF3Cu;
label_32bf3c:
    // 0x32bf3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32bf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bf40: 0xc0cad98  jal         func_32B660
    ctx->pc = 0x32BF40u;
    SET_GPR_U32(ctx, 31, 0x32BF48u);
    ctx->pc = 0x32BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF40u;
    // 0x32bf44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x32BF40u, 0x32BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF48u;
label_32bf48:
    // 0x32bf48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bf48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bf4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bf4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bf50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bf50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bf54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32bf54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32bf58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32bf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bf5c: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x32BF5Cu;
    ctx->pc = 0x32BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF5Cu;
    // 0x32bf60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32BF5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BF64u;
    // 0x32bf64: 0x0  nop
    ctx->pc = 0x32bf64u;
    // NOP
label_32bf68:
    // 0x32bf68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bf68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bf6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bf6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bf70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32bf70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32bf74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bf78: 0x3e00008  jr          $ra
    ctx->pc = 0x32BF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF78u;
        // 0x32bf7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BF80u;
    // 0x32bf80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32bf84: 0x0  nop
    ctx->pc = 0x32bf84u;
    // NOP
    // 0x32bf88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x32bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32bf8c: 0x0  nop
    ctx->pc = 0x32bf8cu;
    // NOP
    ctx->pc = 0x32bf90u;
}
