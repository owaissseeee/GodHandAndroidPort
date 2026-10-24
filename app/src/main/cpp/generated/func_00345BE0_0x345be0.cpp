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

// Function: func_00345BE0
// Address: 0x345be0 - 0x345d10
void func_00345BE0_0x345be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345BE0_0x345be0");
#endif

    switch (ctx->pc) {
        case 0x345c04u: goto label_345c04;
        case 0x345c18u: goto label_345c18;
        case 0x345c48u: goto label_345c48;
        case 0x345c54u: goto label_345c54;
        case 0x345c5cu: goto label_345c5c;
        case 0x345c64u: goto label_345c64;
        case 0x345c98u: goto label_345c98;
        case 0x345ca0u: goto label_345ca0;
        case 0x345ca8u: goto label_345ca8;
        case 0x345cb0u: goto label_345cb0;
        case 0x345cbcu: goto label_345cbc;
        case 0x345cc8u: goto label_345cc8;
        case 0x345cd4u: goto label_345cd4;
        case 0x345cdcu: goto label_345cdc;
        case 0x345ce4u: goto label_345ce4;
        default: break;
    }

    ctx->pc = 0x345be0u;

    // 0x345be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345bf0: 0x26110284  addiu       $s1, $s0, 0x284
    ctx->pc = 0x345bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x345bf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x345bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345bf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x345bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x345bfc: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x345BFCu;
    SET_GPR_U32(ctx, 31, 0x345C04u);
    ctx->pc = 0x345C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345BFCu;
    // 0x345c00: 0x261202a4  addiu       $s2, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x345BFCu, 0x345C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C04u;
label_345c04:
    // 0x345c04: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x345c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x345c08: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x345C08u;
    {
        const bool branch_taken_0x345c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C08u;
        // 0x345c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c08) {
            ctx->pc = 0x345CA0u;
            goto label_345ca0;
        }
    }
    ctx->pc = 0x345C10u;
    // 0x345c10: 0xc0d0f5a  jal         func_343D68
    ctx->pc = 0x345C10u;
    SET_GPR_U32(ctx, 31, 0x345C18u);
    ctx->pc = 0x343D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343D68u, 0x345C10u, 0x345C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C18u;
label_345c18:
    // 0x345c18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x345C18u;
    {
        const bool branch_taken_0x345c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C18u;
        // 0x345c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c18) {
            ctx->pc = 0x345C40u;
            goto label_345c40;
        }
    }
    ctx->pc = 0x345C20u;
    // 0x345c20: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x345c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x345c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345c2c: 0x24847ef8  addiu       $a0, $a0, 0x7EF8
    ctx->pc = 0x345c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32504));
    // 0x345c30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345c34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x345c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345c38: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x345C38u;
    ctx->pc = 0x345C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C38u;
    // 0x345c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345C38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345C40u;
label_345c40:
    // 0x345c40: 0xc0d21f0  jal         func_3487C0
    ctx->pc = 0x345C40u;
    SET_GPR_U32(ctx, 31, 0x345C48u);
    ctx->pc = 0x345C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C40u;
    // 0x345c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3487C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3487C0u, 0x345C40u, 0x345C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C48u;
label_345c48:
    // 0x345c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345c4c: 0xc0d21f0  jal         func_3487C0
    ctx->pc = 0x345C4Cu;
    SET_GPR_U32(ctx, 31, 0x345C54u);
    ctx->pc = 0x345C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C4Cu;
    // 0x345c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3487C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3487C0u, 0x345C4Cu, 0x345C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C54u;
label_345c54:
    // 0x345c54: 0xc0d1d08  jal         func_347420
    ctx->pc = 0x345C54u;
    SET_GPR_U32(ctx, 31, 0x345C5Cu);
    ctx->pc = 0x345C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C54u;
    // 0x345c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347420u, 0x345C54u, 0x345C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C5Cu;
label_345c5c:
    // 0x345c5c: 0xc0d1ce8  jal         func_3473A0
    ctx->pc = 0x345C5Cu;
    SET_GPR_U32(ctx, 31, 0x345C64u);
    ctx->pc = 0x345C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C5Cu;
    // 0x345c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3473A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3473A0u, 0x345C5Cu, 0x345C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C64u;
label_345c64:
    // 0x345c64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x345C64u;
    {
        const bool branch_taken_0x345c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C64u;
        // 0x345c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c64) {
            ctx->pc = 0x345C90u;
            goto label_345c90;
        }
    }
    ctx->pc = 0x345C6Cu;
    // 0x345c6c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x345c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x345c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345c78: 0x24847f28  addiu       $a0, $a0, 0x7F28
    ctx->pc = 0x345c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32552));
    // 0x345c7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345c80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x345c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345c84: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x345C84u;
    ctx->pc = 0x345C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C84u;
    // 0x345c88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345C84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345C8Cu;
    // 0x345c8c: 0x0  nop
    ctx->pc = 0x345c8cu;
    // NOP
label_345c90:
    // 0x345c90: 0xc0d1d00  jal         func_347400
    ctx->pc = 0x345C90u;
    SET_GPR_U32(ctx, 31, 0x345C98u);
    ctx->pc = 0x347400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347400u, 0x345C90u, 0x345C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C98u;
label_345c98:
    // 0x345c98: 0xc0d13f6  jal         func_344FD8
    ctx->pc = 0x345C98u;
    SET_GPR_U32(ctx, 31, 0x345CA0u);
    ctx->pc = 0x345C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C98u;
    // 0x345c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344FD8u, 0x345C98u, 0x345CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CA0u;
label_345ca0:
    // 0x345ca0: 0xc0d1744  jal         func_345D10
    ctx->pc = 0x345CA0u;
    SET_GPR_U32(ctx, 31, 0x345CA8u);
    ctx->pc = 0x345CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CA0u;
    // 0x345ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D10u, 0x345CA0u, 0x345CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CA8u;
label_345ca8:
    // 0x345ca8: 0xc0d16be  jal         func_345AF8
    ctx->pc = 0x345CA8u;
    SET_GPR_U32(ctx, 31, 0x345CB0u);
    ctx->pc = 0x345CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CA8u;
    // 0x345cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345AF8u, 0x345CA8u, 0x345CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CB0u;
label_345cb0:
    // 0x345cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cb4: 0xc0d17d2  jal         func_345F48
    ctx->pc = 0x345CB4u;
    SET_GPR_U32(ctx, 31, 0x345CBCu);
    ctx->pc = 0x345CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CB4u;
    // 0x345cb8: 0x82050072  lb          $a1, 0x72($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F48u, 0x345CB4u, 0x345CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CBCu;
label_345cbc:
    // 0x345cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cc0: 0xc0d2154  jal         func_348550
    ctx->pc = 0x345CC0u;
    SET_GPR_U32(ctx, 31, 0x345CC8u);
    ctx->pc = 0x345CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CC0u;
    // 0x345cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348550u, 0x345CC0u, 0x345CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CC8u;
label_345cc8:
    // 0x345cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x345cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ccc: 0xc0d2154  jal         func_348550
    ctx->pc = 0x345CCCu;
    SET_GPR_U32(ctx, 31, 0x345CD4u);
    ctx->pc = 0x345CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CCCu;
    // 0x345cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348550u, 0x345CCCu, 0x345CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CD4u;
label_345cd4:
    // 0x345cd4: 0xc0d2110  jal         func_348440
    ctx->pc = 0x345CD4u;
    SET_GPR_U32(ctx, 31, 0x345CDCu);
    ctx->pc = 0x345CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CD4u;
    // 0x345cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348440u, 0x345CD4u, 0x345CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CDCu;
label_345cdc:
    // 0x345cdc: 0xc0d2110  jal         func_348440
    ctx->pc = 0x345CDCu;
    SET_GPR_U32(ctx, 31, 0x345CE4u);
    ctx->pc = 0x345CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CDCu;
    // 0x345ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348440u, 0x345CDCu, 0x345CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CE4u;
label_345ce4:
    // 0x345ce4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x345ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x345ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345cec: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x345cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x345cf0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x345cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x345cf4: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x345cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x345cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x345d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345d08: 0x3e00008  jr          $ra
    ctx->pc = 0x345D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D08u;
        // 0x345d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345D10u;
}
