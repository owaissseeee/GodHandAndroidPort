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

// Function: CostumeObj_applyTailPartMeshes
// Address: 0x2981d8 - 0x298278
void CostumeObj_applyTailPartMeshes_0x2981d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CostumeObj_applyTailPartMeshes_0x2981d8");
#endif

    switch (ctx->pc) {
        case 0x29822cu: goto label_29822c;
        case 0x298240u: goto label_298240;
        case 0x298264u: goto label_298264;
        default: break;
    }

    ctx->pc = 0x2981d8u;

    // 0x2981d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2981d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2981dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2981dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2981e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2981e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981e4: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2981E4u;
    {
        const bool branch_taken_0x2981e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981E4u;
        // 0x2981e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981e4) {
            ctx->pc = 0x298264u;
            goto label_298264;
        }
    }
    ctx->pc = 0x2981ECu;
    // 0x2981ec: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x2981ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2981f0: 0x24020605  addiu       $v0, $zero, 0x605
    ctx->pc = 0x2981f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x2981f4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2981F4u;
    {
        const bool branch_taken_0x2981f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2981F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981F4u;
        // 0x2981f8: 0x24020607  addiu       $v0, $zero, 0x607 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981f4) {
            ctx->pc = 0x29820Cu;
            goto label_29820c;
        }
    }
    ctx->pc = 0x2981FCu;
    // 0x2981fc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2981FCu;
    {
        const bool branch_taken_0x2981fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981FCu;
        // 0x298200: 0x28c20012  slti        $v0, $a2, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981fc) {
            ctx->pc = 0x298248u;
            goto label_298248;
        }
    }
    ctx->pc = 0x298204u;
    // 0x298204: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x298204u;
    {
        const bool branch_taken_0x298204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298204u;
        // 0x298208: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298204) {
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x29820Cu;
label_29820c:
    // 0x29820c: 0x28c20012  slti        $v0, $a2, 0x12
    ctx->pc = 0x29820cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x298210: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x298210u;
    {
        const bool branch_taken_0x298210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298210) {
            ctx->pc = 0x298214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298210u;
            // 0x298214: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x298218u;
    // 0x298218: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x29821c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29821cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298220: 0x24a5a9d0  addiu       $a1, $a1, -0x5630
    ctx->pc = 0x298220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945232));
    // 0x298224: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298224u;
    SET_GPR_U32(ctx, 31, 0x29822Cu);
    ctx->pc = 0x298228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298224u;
    // 0x298228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298224u, 0x29822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29822Cu;
label_29822c:
    // 0x29822c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x29822cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298234: 0x24a5a9d8  addiu       $a1, $a1, -0x5628
    ctx->pc = 0x298234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945240));
    // 0x298238: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298238u;
    SET_GPR_U32(ctx, 31, 0x298240u);
    ctx->pc = 0x29823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298238u;
    // 0x29823c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298238u, 0x298240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298240u;
label_298240:
    // 0x298240: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x298240u;
    {
        const bool branch_taken_0x298240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298240u;
        // 0x298244: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298240) {
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x298248u;
label_298248:
    // 0x298248: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x298248u;
    {
        const bool branch_taken_0x298248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298248) {
            ctx->pc = 0x29824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298248u;
            // 0x29824c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x298250u;
    // 0x298250: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298258: 0x24a5a9d0  addiu       $a1, $a1, -0x5630
    ctx->pc = 0x298258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945232));
    // 0x29825c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x29825Cu;
    SET_GPR_U32(ctx, 31, 0x298264u);
    ctx->pc = 0x298260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29825Cu;
    // 0x298260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x29825Cu, 0x298264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298264u;
label_298264:
    // 0x298264: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x298264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_298268:
    // 0x298268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29826c: 0x3e00008  jr          $ra
    ctx->pc = 0x29826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29826Cu;
        // 0x298270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298274u;
    // 0x298274: 0x0  nop
    ctx->pc = 0x298274u;
    // NOP
    ctx->pc = 0x298278u;
}
