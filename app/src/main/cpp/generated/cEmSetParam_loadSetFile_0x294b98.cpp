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

// Function: cEmSetParam_loadSetFile
// Address: 0x294b98 - 0x294c68
void cEmSetParam_loadSetFile_0x294b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_loadSetFile_0x294b98");
#endif

    switch (ctx->pc) {
        case 0x294c08u: goto label_294c08;
        case 0x294c34u: goto label_294c34;
        case 0x294c3cu: goto label_294c3c;
        default: break;
    }

    ctx->pc = 0x294b98u;

    // 0x294b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294b9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x294b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x294ba0: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x294ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x294ba4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x294ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x294ba8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x294ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x294bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294bb4: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x294bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x294bb8: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x294bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x294bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x294bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294bc0: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x294BC0u;
    {
        const bool branch_taken_0x294bc0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x294BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BC0u;
        // 0x294bc4: 0x26248658  addiu       $a0, $s1, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bc0) {
            ctx->pc = 0x294C4Cu;
            goto label_294c4c;
        }
    }
    ctx->pc = 0x294BC8u;
    // 0x294bc8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x294BC8u;
    {
        const bool branch_taken_0x294bc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x294bc8) {
            ctx->pc = 0x294BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294BC8u;
            // 0x294bcc: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294BD8u;
            goto label_294bd8;
        }
    }
    ctx->pc = 0x294BD0u;
    // 0x294bd0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x294BD0u;
    {
        const bool branch_taken_0x294bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BD0u;
        // 0x294bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bd0) {
            ctx->pc = 0x294C50u;
            goto label_294c50;
        }
    }
    ctx->pc = 0x294BD8u;
label_294bd8:
    // 0x294bd8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x294bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x294bdc: 0x34424d45  ori         $v0, $v0, 0x4D45
    ctx->pc = 0x294bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19781);
    // 0x294be0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x294be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x294be4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294BE4u;
    {
        const bool branch_taken_0x294be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x294BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BE4u;
        // 0x294be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294be4) {
            ctx->pc = 0x294BF4u;
            goto label_294bf4;
        }
    }
    ctx->pc = 0x294BECu;
    // 0x294bec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x294BECu;
    {
        const bool branch_taken_0x294bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BECu;
        // 0x294bf0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bec) {
            ctx->pc = 0x294C50u;
            goto label_294c50;
        }
    }
    ctx->pc = 0x294BF4u;
label_294bf4:
    // 0x294bf4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x294bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x294bf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x294BF8u;
    {
        const bool branch_taken_0x294bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BF8u;
        // 0x294bfc: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bf8) {
            ctx->pc = 0x294C24u;
            goto label_294c24;
        }
    }
    ctx->pc = 0x294C00u;
    // 0x294c00: 0xc0afb72  jal         func_2BEDC8
    ctx->pc = 0x294C00u;
    SET_GPR_U32(ctx, 31, 0x294C08u);
    ctx->pc = 0x294C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C00u;
    // 0x294c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDC8u, 0x294C00u, 0x294C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C08u;
label_294c08:
    // 0x294c08: 0x8e248658  lw          $a0, -0x79A8($s1)
    ctx->pc = 0x294c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x294c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x294c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294c14: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x294c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x294c18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x294c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x294c1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x294C1Cu;
    {
        const bool branch_taken_0x294c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C1Cu;
        // 0x294c20: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c1c) {
            ctx->pc = 0x294C50u;
            goto label_294c50;
        }
    }
    ctx->pc = 0x294C24u;
label_294c24:
    // 0x294c24: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x294c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x294c28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x294c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c2c: 0xc0afb7a  jal         func_2BEDE8
    ctx->pc = 0x294C2Cu;
    SET_GPR_U32(ctx, 31, 0x294C34u);
    ctx->pc = 0x294C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C2Cu;
    // 0x294c30: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDE8u, 0x294C2Cu, 0x294C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C34u;
label_294c34:
    // 0x294c34: 0xc0a5580  jal         func_295600
    ctx->pc = 0x294C34u;
    SET_GPR_U32(ctx, 31, 0x294C3Cu);
    ctx->pc = 0x294C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C34u;
    // 0x294c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295600u, 0x294C34u, 0x294C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C3Cu;
label_294c3c:
    // 0x294c3c: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x294c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x294c40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x294c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294c44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x294c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x294c48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x294c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_294c4c:
    // 0x294c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294c50:
    // 0x294c50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x294c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294c54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x294c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294c58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x294c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294c60: 0x3e00008  jr          $ra
    ctx->pc = 0x294C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C60u;
        // 0x294c64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C68u;
}
