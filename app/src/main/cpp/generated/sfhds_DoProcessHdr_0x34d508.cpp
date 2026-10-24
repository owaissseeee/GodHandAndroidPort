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

// Function: sfhds_DoProcessHdr
// Address: 0x34d508 - 0x34d660
void sfhds_DoProcessHdr_0x34d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_DoProcessHdr_0x34d508");
#endif

    switch (ctx->pc) {
        case 0x34d52cu: goto label_34d52c;
        case 0x34d550u: goto label_34d550;
        case 0x34d594u: goto label_34d594;
        case 0x34d5c4u: goto label_34d5c4;
        case 0x34d5d0u: goto label_34d5d0;
        case 0x34d5e0u: goto label_34d5e0;
        case 0x34d5f4u: goto label_34d5f4;
        case 0x34d608u: goto label_34d608;
        case 0x34d61cu: goto label_34d61c;
        case 0x34d630u: goto label_34d630;
        case 0x34d640u: goto label_34d640;
        default: break;
    }

    ctx->pc = 0x34d508u;

    // 0x34d508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d50c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34d510: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34d510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d514: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34d514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34d51c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34d520: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34d520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34d524: 0xc0d760a  jal         func_35D828
    ctx->pc = 0x34D524u;
    SET_GPR_U32(ctx, 31, 0x34D52Cu);
    ctx->pc = 0x34D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D524u;
    // 0x34d528: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D828u, 0x34D524u, 0x34D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D52Cu;
label_34d52c:
    // 0x34d52c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d530: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x34d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x34d534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d538: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x34d538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x34d53c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x34d53cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x34d540: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x34D540u;
    {
        const bool branch_taken_0x34d540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D540u;
        // 0x34d544: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d540) {
            ctx->pc = 0x34D648u;
            goto label_34d648;
        }
    }
    ctx->pc = 0x34D548u;
    // 0x34d548: 0xc0d76ce  jal         func_35DB38
    ctx->pc = 0x34D548u;
    SET_GPR_U32(ctx, 31, 0x34D550u);
    ctx->pc = 0x35DB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DB38u, 0x34D548u, 0x34D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D550u;
label_34d550:
    // 0x34d550: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D550u;
    {
        const bool branch_taken_0x34d550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D550u;
        // 0x34d554: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d550) {
            ctx->pc = 0x34D564u;
            goto label_34d564;
        }
    }
    ctx->pc = 0x34D558u;
    // 0x34d558: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x34d558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x34d55c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x34d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x34d560: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34d564:
    // 0x34d564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d568: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x34d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d56c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x34d56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x34d570: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x34d570u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34d574: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x34d574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x34d578: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x34d578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34d57c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x34d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x34d580: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x34d580u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x34d584: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x34d584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34d588: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x34d588u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x34d58c: 0xc0d77de  jal         func_35DF78
    ctx->pc = 0x34D58Cu;
    SET_GPR_U32(ctx, 31, 0x34D594u);
    ctx->pc = 0x34D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D58Cu;
    // 0x34d590: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DF78u, 0x34D58Cu, 0x34D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D594u;
label_34d594:
    // 0x34d594: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x34d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34d598: 0x2a10006e  slti        $s0, $s0, 0x6E
    ctx->pc = 0x34d598u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x34d59c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34d59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5a4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x34d5a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x34d5a8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x34d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x34d5ac: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34D5ACu;
    {
        const bool branch_taken_0x34d5ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D5ACu;
        // 0x34d5b0: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d5ac) {
            ctx->pc = 0x34D5B8u;
            goto label_34d5b8;
        }
    }
    ctx->pc = 0x34D5B4u;
    // 0x34d5b4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x34d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_34d5b8:
    // 0x34d5b8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x34d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34d5bc: 0xc0d3598  jal         func_34D660
    ctx->pc = 0x34D5BCu;
    SET_GPR_U32(ctx, 31, 0x34D5C4u);
    ctx->pc = 0x34D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D5BCu;
    // 0x34d5c0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D660u, 0x34D5BCu, 0x34D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5C4u;
label_34d5c4:
    // 0x34d5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5c8: 0xc0d35bc  jal         func_34D6F0
    ctx->pc = 0x34D5C8u;
    SET_GPR_U32(ctx, 31, 0x34D5D0u);
    ctx->pc = 0x34D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D5C8u;
    // 0x34d5cc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D6F0u, 0x34D5C8u, 0x34D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5D0u;
label_34d5d0:
    // 0x34d5d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5d4: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x34d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x34d5d8: 0xc0d35ea  jal         func_34D7A8
    ctx->pc = 0x34D5D8u;
    SET_GPR_U32(ctx, 31, 0x34D5E0u);
    ctx->pc = 0x34D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D5D8u;
    // 0x34d5dc: 0x240600bd  addiu       $a2, $zero, 0xBD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D7A8u, 0x34D5D8u, 0x34D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5E0u;
label_34d5e0:
    // 0x34d5e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5e4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x34d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x34d5e8: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x34d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x34d5ec: 0xc0d35ea  jal         func_34D7A8
    ctx->pc = 0x34D5ECu;
    SET_GPR_U32(ctx, 31, 0x34D5F4u);
    ctx->pc = 0x34D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D5ECu;
    // 0x34d5f0: 0x240600bf  addiu       $a2, $zero, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D7A8u, 0x34D5ECu, 0x34D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5F4u;
label_34d5f4:
    // 0x34d5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5f8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x34d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x34d5fc: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x34d5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x34d600: 0xc0d35ea  jal         func_34D7A8
    ctx->pc = 0x34D600u;
    SET_GPR_U32(ctx, 31, 0x34D608u);
    ctx->pc = 0x34D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D600u;
    // 0x34d604: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D7A8u, 0x34D600u, 0x34D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D608u;
label_34d608:
    // 0x34d608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d60c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x34d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x34d610: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34d614: 0xc0d35ea  jal         func_34D7A8
    ctx->pc = 0x34D614u;
    SET_GPR_U32(ctx, 31, 0x34D61Cu);
    ctx->pc = 0x34D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D614u;
    // 0x34d618: 0x240600ef  addiu       $a2, $zero, 0xEF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D7A8u, 0x34D614u, 0x34D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D61Cu;
label_34d61c:
    // 0x34d61c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d620: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x34d620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x34d624: 0x2626004c  addiu       $a2, $s1, 0x4C
    ctx->pc = 0x34d624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x34d628: 0xc0d3608  jal         func_34D820
    ctx->pc = 0x34D628u;
    SET_GPR_U32(ctx, 31, 0x34D630u);
    ctx->pc = 0x34D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D628u;
    // 0x34d62c: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D820u, 0x34D628u, 0x34D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D630u;
label_34d630:
    // 0x34d630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d634: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x34d634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x34d638: 0xc0d362e  jal         func_34D8B8
    ctx->pc = 0x34D638u;
    SET_GPR_U32(ctx, 31, 0x34D640u);
    ctx->pc = 0x34D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D638u;
    // 0x34d63c: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D8B8u, 0x34D638u, 0x34D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D640u;
label_34d640:
    // 0x34d640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d644: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34d644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34d648:
    // 0x34d648: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34d648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d64c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34d64cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34d650: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34d650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d654: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34d654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34d658: 0x3e00008  jr          $ra
    ctx->pc = 0x34D658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D658u;
        // 0x34d65c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D660u;
}
