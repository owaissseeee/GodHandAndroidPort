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

// Function: CostumeObj_applyPartMeshes
// Address: 0x298110 - 0x2981b0
void CostumeObj_applyPartMeshes_0x298110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CostumeObj_applyPartMeshes_0x298110");
#endif

    switch (ctx->pc) {
        case 0x298164u: goto label_298164;
        case 0x298178u: goto label_298178;
        case 0x29819cu: goto label_29819c;
        default: break;
    }

    ctx->pc = 0x298110u;

    // 0x298110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x298114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x298118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29811c: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29811Cu;
    {
        const bool branch_taken_0x29811c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29811Cu;
        // 0x298120: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29811c) {
            ctx->pc = 0x29819Cu;
            goto label_29819c;
        }
    }
    ctx->pc = 0x298124u;
    // 0x298124: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x298124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x298128: 0x24020605  addiu       $v0, $zero, 0x605
    ctx->pc = 0x298128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x29812c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29812Cu;
    {
        const bool branch_taken_0x29812c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29812Cu;
        // 0x298130: 0x24020607  addiu       $v0, $zero, 0x607 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29812c) {
            ctx->pc = 0x298144u;
            goto label_298144;
        }
    }
    ctx->pc = 0x298134u;
    // 0x298134: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x298134u;
    {
        const bool branch_taken_0x298134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298134u;
        // 0x298138: 0x28c20010  slti        $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298134) {
            ctx->pc = 0x298180u;
            goto label_298180;
        }
    }
    ctx->pc = 0x29813Cu;
    // 0x29813c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29813Cu;
    {
        const bool branch_taken_0x29813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29813Cu;
        // 0x298140: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29813c) {
            ctx->pc = 0x2981A0u;
            goto label_2981a0;
        }
    }
    ctx->pc = 0x298144u;
label_298144:
    // 0x298144: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x298144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x298148: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x298148u;
    {
        const bool branch_taken_0x298148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298148) {
            ctx->pc = 0x29814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298148u;
            // 0x29814c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2981A0u;
            goto label_2981a0;
        }
    }
    ctx->pc = 0x298150u;
    // 0x298150: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298158: 0x24a5a9b0  addiu       $a1, $a1, -0x5650
    ctx->pc = 0x298158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
    // 0x29815c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x29815Cu;
    SET_GPR_U32(ctx, 31, 0x298164u);
    ctx->pc = 0x298160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29815Cu;
    // 0x298160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x29815Cu, 0x298164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298164u;
label_298164:
    // 0x298164: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29816c: 0x24a5a9b8  addiu       $a1, $a1, -0x5648
    ctx->pc = 0x29816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945208));
    // 0x298170: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298170u;
    SET_GPR_U32(ctx, 31, 0x298178u);
    ctx->pc = 0x298174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298170u;
    // 0x298174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298170u, 0x298178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298178u;
label_298178:
    // 0x298178: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x298178u;
    {
        const bool branch_taken_0x298178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298178u;
        // 0x29817c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298178) {
            ctx->pc = 0x2981A0u;
            goto label_2981a0;
        }
    }
    ctx->pc = 0x298180u;
label_298180:
    // 0x298180: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x298180u;
    {
        const bool branch_taken_0x298180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298180) {
            ctx->pc = 0x298184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298180u;
            // 0x298184: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2981A0u;
            goto label_2981a0;
        }
    }
    ctx->pc = 0x298188u;
    // 0x298188: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x29818c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298190: 0x24a5a9b0  addiu       $a1, $a1, -0x5650
    ctx->pc = 0x298190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
    // 0x298194: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298194u;
    SET_GPR_U32(ctx, 31, 0x29819Cu);
    ctx->pc = 0x298198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298194u;
    // 0x298198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298194u, 0x29819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29819Cu;
label_29819c:
    // 0x29819c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29819cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2981a0:
    // 0x2981a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2981a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2981a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2981A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2981A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981A4u;
        // 0x2981a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2981A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2981ACu;
    // 0x2981ac: 0x0  nop
    ctx->pc = 0x2981acu;
    // NOP
    ctx->pc = 0x2981b0u;
}
