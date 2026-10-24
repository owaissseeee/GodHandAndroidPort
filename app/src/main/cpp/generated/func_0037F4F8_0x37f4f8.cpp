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

// Function: func_0037F4F8
// Address: 0x37f4f8 - 0x37fac8
void func_0037F4F8_0x37f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037F4F8_0x37f4f8");
#endif

    switch (ctx->pc) {
        case 0x37f548u: goto label_37f548;
        case 0x37f588u: goto label_37f588;
        case 0x37f5e4u: goto label_37f5e4;
        case 0x37f62cu: goto label_37f62c;
        case 0x37f674u: goto label_37f674;
        case 0x37f6ccu: goto label_37f6cc;
        case 0x37f6e8u: goto label_37f6e8;
        case 0x37f6f0u: goto label_37f6f0;
        case 0x37f710u: goto label_37f710;
        case 0x37f734u: goto label_37f734;
        case 0x37f750u: goto label_37f750;
        case 0x37f77cu: goto label_37f77c;
        case 0x37f798u: goto label_37f798;
        case 0x37f7c4u: goto label_37f7c4;
        case 0x37f804u: goto label_37f804;
        case 0x37f840u: goto label_37f840;
        case 0x37f848u: goto label_37f848;
        case 0x37f854u: goto label_37f854;
        case 0x37f874u: goto label_37f874;
        case 0x37f8b4u: goto label_37f8b4;
        case 0x37f8c8u: goto label_37f8c8;
        case 0x37f8d0u: goto label_37f8d0;
        case 0x37f8e0u: goto label_37f8e0;
        case 0x37f8ecu: goto label_37f8ec;
        case 0x37f900u: goto label_37f900;
        case 0x37f940u: goto label_37f940;
        case 0x37f948u: goto label_37f948;
        case 0x37f958u: goto label_37f958;
        case 0x37f994u: goto label_37f994;
        case 0x37f9b0u: goto label_37f9b0;
        case 0x37f9c0u: goto label_37f9c0;
        case 0x37f9c8u: goto label_37f9c8;
        case 0x37f9e0u: goto label_37f9e0;
        case 0x37fa1cu: goto label_37fa1c;
        case 0x37fa7cu: goto label_37fa7c;
        default: break;
    }

    ctx->pc = 0x37f4f8u;

    // 0x37f4f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37f4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37f4fc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37f500: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37f504: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37f504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37f508: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37f508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f50c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37f510: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37f514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37f518: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37f51c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37f520: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x37f520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x37f524: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37f524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37f528: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x37f528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37f52c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x37f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37f530: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37f534: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37f538: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F538u;
    {
        const bool branch_taken_0x37f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f538) {
            ctx->pc = 0x37F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F538u;
            // 0x37f53c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F550u;
            goto label_37f550;
        }
    }
    ctx->pc = 0x37F540u;
    // 0x37f540: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F540u;
    SET_GPR_U32(ctx, 31, 0x37F548u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F540u, 0x37F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F548u;
label_37f548:
    // 0x37f548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F548u;
    {
        const bool branch_taken_0x37f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F548u;
        // 0x37f54c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f548) {
            ctx->pc = 0x37F558u;
            goto label_37f558;
        }
    }
    ctx->pc = 0x37F550u;
label_37f550:
    // 0x37f550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f554: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37f558:
    // 0x37f558: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x37f558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x37f55c: 0x26330470  addiu       $s3, $s1, 0x470
    ctx->pc = 0x37f55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
    // 0x37f560: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x37f560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37f564: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37f568: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x37f568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f56c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f570: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37f574: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37f578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F578u;
    {
        const bool branch_taken_0x37f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F578u;
        // 0x37f57c: 0x263404bc  addiu       $s4, $s1, 0x4BC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f578) {
            ctx->pc = 0x37F590u;
            goto label_37f590;
        }
    }
    ctx->pc = 0x37F580u;
    // 0x37f580: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F580u;
    SET_GPR_U32(ctx, 31, 0x37F588u);
    ctx->pc = 0x37F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F580u;
    // 0x37f584: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F580u, 0x37F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F588u;
label_37f588:
    // 0x37f588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37F588u;
    {
        const bool branch_taken_0x37f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F588u;
        // 0x37f58c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f588) {
            ctx->pc = 0x37F5A0u;
            goto label_37f5a0;
        }
    }
    ctx->pc = 0x37F590u;
label_37f590:
    // 0x37f590: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37f594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37f59c: 0x26300044  addiu       $s0, $s1, 0x44
    ctx->pc = 0x37f59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_37f5a0:
    // 0x37f5a0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37f5a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5a4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x37f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37f5a8: 0x10520025  beq         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x37F5A8u;
    {
        const bool branch_taken_0x37f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F5A8u;
        // 0x37f5ac: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f5a8) {
            ctx->pc = 0x37F640u;
            goto label_37f640;
        }
    }
    ctx->pc = 0x37F5B0u;
    // 0x37f5b0: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x37f5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x37f5b4: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f5b8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f5bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f5c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F5C0u;
    {
        const bool branch_taken_0x37f5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F5C0u;
        // 0x37f5c4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f5c0) {
            ctx->pc = 0x37F610u;
            goto label_37f610;
        }
    }
    ctx->pc = 0x37F5C8u;
    // 0x37f5c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f5cc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f5d0: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f5d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F5D4u;
    {
        const bool branch_taken_0x37f5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F5D4u;
        // 0x37f5d8: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f5d4) {
            ctx->pc = 0x37F5ECu;
            goto label_37f5ec;
        }
    }
    ctx->pc = 0x37F5DCu;
    // 0x37f5dc: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F5DCu;
    SET_GPR_U32(ctx, 31, 0x37F5E4u);
    ctx->pc = 0x37F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F5DCu;
    // 0x37f5e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F5DCu, 0x37F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F5E4u;
label_37f5e4:
    // 0x37f5e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F5E4u;
    {
        const bool branch_taken_0x37f5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F5E4u;
        // 0x37f5e8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f5e4) {
            ctx->pc = 0x37F614u;
            goto label_37f614;
        }
    }
    ctx->pc = 0x37F5ECu;
label_37f5ec:
    // 0x37f5ec: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37f5f0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f5f4: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f5f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f5fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f600: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f608: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f60c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f610:
    // 0x37f610: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37f614:
    // 0x37f614: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37f614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37f618: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37f61c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F61Cu;
    {
        const bool branch_taken_0x37f61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f61c) {
            ctx->pc = 0x37F620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F61Cu;
            // 0x37f620: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F634u;
            goto label_37f634;
        }
    }
    ctx->pc = 0x37F624u;
    // 0x37f624: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F624u;
    SET_GPR_U32(ctx, 31, 0x37F62Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F624u, 0x37F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F62Cu;
label_37f62c:
    // 0x37f62c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F62Cu;
    {
        const bool branch_taken_0x37f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F62Cu;
        // 0x37f630: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f62c) {
            ctx->pc = 0x37F63Cu;
            goto label_37f63c;
        }
    }
    ctx->pc = 0x37F634u;
label_37f634:
    // 0x37f634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f638: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37f63c:
    // 0x37f63c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37f640:
    // 0x37f640: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37f640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f644: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f648: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f64c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f650: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F650u;
    {
        const bool branch_taken_0x37f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F650u;
        // 0x37f654: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f650) {
            ctx->pc = 0x37F6A0u;
            goto label_37f6a0;
        }
    }
    ctx->pc = 0x37F658u;
    // 0x37f658: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f65c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f660: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f664: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F664u;
    {
        const bool branch_taken_0x37f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F664u;
        // 0x37f668: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f664) {
            ctx->pc = 0x37F67Cu;
            goto label_37f67c;
        }
    }
    ctx->pc = 0x37F66Cu;
    // 0x37f66c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F66Cu;
    SET_GPR_U32(ctx, 31, 0x37F674u);
    ctx->pc = 0x37F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F66Cu;
    // 0x37f670: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F66Cu, 0x37F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F674u;
label_37f674:
    // 0x37f674: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F674u;
    {
        const bool branch_taken_0x37f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F674u;
        // 0x37f678: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f674) {
            ctx->pc = 0x37F6A4u;
            goto label_37f6a4;
        }
    }
    ctx->pc = 0x37F67Cu;
label_37f67c:
    // 0x37f67c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37f680: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f684: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f688: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f690: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f694: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f698: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f69c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f6a0:
    // 0x37f6a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x37f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37f6a4:
    // 0x37f6a4: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f6a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F6A8u;
    {
        const bool branch_taken_0x37f6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F6A8u;
        // 0x37f6ac: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f6a8) {
            ctx->pc = 0x37F6BCu;
            goto label_37f6bc;
        }
    }
    ctx->pc = 0x37F6B0u;
    // 0x37f6b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f6b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F6B4u;
    {
        const bool branch_taken_0x37f6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F6B4u;
        // 0x37f6b8: 0x2450c208  addiu       $s0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f6b4) {
            ctx->pc = 0x37F6C4u;
            goto label_37f6c4;
        }
    }
    ctx->pc = 0x37F6BCu;
label_37f6bc:
    // 0x37f6bc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f6c0: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x37f6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37f6c4:
    // 0x37f6c4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37F6C4u;
    SET_GPR_U32(ctx, 31, 0x37F6CCu);
    ctx->pc = 0x37F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6C4u;
    // 0x37f6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37F6C4u, 0x37F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6CCu;
label_37f6cc:
    // 0x37f6cc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x37f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x37f6d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37f6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37f6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6dc: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x37f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f6e0: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37F6E0u;
    SET_GPR_U32(ctx, 31, 0x37F6E8u);
    ctx->pc = 0x37F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6E0u;
    // 0x37f6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37F6E0u, 0x37F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6E8u;
label_37f6e8:
    // 0x37f6e8: 0xc0e1688  jal         func_385A20
    ctx->pc = 0x37F6E8u;
    SET_GPR_U32(ctx, 31, 0x37F6F0u);
    ctx->pc = 0x37F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6E8u;
    // 0x37f6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385A20u, 0x37F6E8u, 0x37F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6F0u;
label_37f6f0:
    // 0x37f6f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x37f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x37f6f4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x37f6f8: 0x2444b168  addiu       $a0, $v0, -0x4E98
    ctx->pc = 0x37f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x37f6fc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB174u));
    // 0x37f700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F700u;
    {
        const bool branch_taken_0x37f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F700u;
        // 0x37f704: 0x2470c250  addiu       $s0, $v1, -0x3DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f700) {
            ctx->pc = 0x37F718u;
            goto label_37f718;
        }
    }
    ctx->pc = 0x37F708u;
    // 0x37f708: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F708u;
    SET_GPR_U32(ctx, 31, 0x37F710u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F708u, 0x37F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F710u;
label_37f710:
    // 0x37f710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37F710u;
    {
        const bool branch_taken_0x37f710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F710u;
        // 0x37f714: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f710) {
            ctx->pc = 0x37F728u;
            goto label_37f728;
        }
    }
    ctx->pc = 0x37F718u;
label_37f718:
    // 0x37f718: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37f71c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x37f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x37f720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f724: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37f728:
    // 0x37f728: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x37f728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x37f72c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37F72Cu;
    SET_GPR_U32(ctx, 31, 0x37F734u);
    ctx->pc = 0x37F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F72Cu;
    // 0x37f730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37F72Cu, 0x37F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F734u;
label_37f734:
    // 0x37f734: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x37f734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x37f738: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37f738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f73c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37f73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f740: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37f744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f748: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37F748u;
    SET_GPR_U32(ctx, 31, 0x37F750u);
    ctx->pc = 0x37F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F748u;
    // 0x37f74c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37F748u, 0x37F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F750u;
label_37f750:
    // 0x37f750: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x37f750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x37f754: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f758: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F758u;
    {
        const bool branch_taken_0x37f758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F758u;
        // 0x37f75c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f758) {
            ctx->pc = 0x37F76Cu;
            goto label_37f76c;
        }
    }
    ctx->pc = 0x37F760u;
    // 0x37f760: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f764: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F764u;
    {
        const bool branch_taken_0x37f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F764u;
        // 0x37f768: 0x2450c208  addiu       $s0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f764) {
            ctx->pc = 0x37F774u;
            goto label_37f774;
        }
    }
    ctx->pc = 0x37F76Cu;
label_37f76c:
    // 0x37f76c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f76cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f770: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x37f770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_37f774:
    // 0x37f774: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37F774u;
    SET_GPR_U32(ctx, 31, 0x37F77Cu);
    ctx->pc = 0x37F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F774u;
    // 0x37f778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37F774u, 0x37F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F77Cu;
label_37f77c:
    // 0x37f77c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f780: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37f780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f784: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37f784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f788: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37f78c: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x37f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f790: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37F790u;
    SET_GPR_U32(ctx, 31, 0x37F798u);
    ctx->pc = 0x37F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F790u;
    // 0x37f794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37F790u, 0x37F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F798u;
label_37f798:
    // 0x37f798: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f79c: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f7a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F7A0u;
    {
        const bool branch_taken_0x37f7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7A0u;
        // 0x37f7a4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f7a0) {
            ctx->pc = 0x37F7B4u;
            goto label_37f7b4;
        }
    }
    ctx->pc = 0x37F7A8u;
    // 0x37f7a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f7ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F7ACu;
    {
        const bool branch_taken_0x37f7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7ACu;
        // 0x37f7b0: 0x2444c208  addiu       $a0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f7ac) {
            ctx->pc = 0x37F7BCu;
            goto label_37f7bc;
        }
    }
    ctx->pc = 0x37F7B4u;
label_37f7b4:
    // 0x37f7b4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f7b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x37f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37f7bc:
    // 0x37f7bc: 0xc0ed088  jal         func_3B4220
    ctx->pc = 0x37F7BCu;
    SET_GPR_U32(ctx, 31, 0x37F7C4u);
    ctx->pc = 0x37F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7BCu;
    // 0x37f7c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4220u, 0x37F7BCu, 0x37F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7C4u;
label_37f7c4:
    // 0x37f7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37f7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7c8: 0x6010037  bgez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x37F7C8u;
    {
        const bool branch_taken_0x37f7c8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x37F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7C8u;
        // 0x37f7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f7c8) {
            ctx->pc = 0x37F8A8u;
            goto label_37f8a8;
        }
    }
    ctx->pc = 0x37F7D0u;
    // 0x37f7d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f7d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f7d8: 0x2444c258  addiu       $a0, $v0, -0x3DA8
    ctx->pc = 0x37f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951512));
    // 0x37f7dc: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f7e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F7E0u;
    {
        const bool branch_taken_0x37f7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7E0u;
        // 0x37f7e4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f7e0) {
            ctx->pc = 0x37F7F4u;
            goto label_37f7f4;
        }
    }
    ctx->pc = 0x37F7E8u;
    // 0x37f7e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f7ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F7ECu;
    {
        const bool branch_taken_0x37f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7ECu;
        // 0x37f7f0: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f7ec) {
            ctx->pc = 0x37F7FCu;
            goto label_37f7fc;
        }
    }
    ctx->pc = 0x37F7F4u;
label_37f7f4:
    // 0x37f7f4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f7f8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x37f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37f7fc:
    // 0x37f7fc: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x37F7FCu;
    SET_GPR_U32(ctx, 31, 0x37F804u);
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x37F7FCu, 0x37F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F804u;
label_37f804:
    // 0x37f804: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37f804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f808: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37f80c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x37f80cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x37f810: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x37f810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x37f814: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x37f814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f818: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f81c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f820: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f824: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F824u;
    {
        const bool branch_taken_0x37f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F824u;
        // 0x37f828: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f824) {
            ctx->pc = 0x37F874u;
            goto label_37f874;
        }
    }
    ctx->pc = 0x37F82Cu;
    // 0x37f82c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f830: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f834: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f838: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F838u;
    {
        const bool branch_taken_0x37f838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F838u;
        // 0x37f83c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f838) {
            ctx->pc = 0x37F850u;
            goto label_37f850;
        }
    }
    ctx->pc = 0x37F840u;
label_37f840:
    // 0x37f840: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F840u;
    SET_GPR_U32(ctx, 31, 0x37F848u);
    ctx->pc = 0x37F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F840u;
    // 0x37f844: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F840u, 0x37F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F848u;
label_37f848:
    // 0x37f848: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F848u;
    {
        const bool branch_taken_0x37f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F848u;
        // 0x37f84c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f848) {
            ctx->pc = 0x37F878u;
            goto label_37f878;
        }
    }
    ctx->pc = 0x37F850u;
label_37f850:
    // 0x37f850: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_37f854:
    // 0x37f854: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f858: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f85c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f86c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f870: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f874:
    // 0x37f874: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37f874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37f878:
    // 0x37f878: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f87c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f880: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f884: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x37F884u;
    {
        const bool branch_taken_0x37f884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F884u;
        // 0x37f888: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f884) {
            ctx->pc = 0x37FAA8u;
            goto label_37faa8;
        }
    }
    ctx->pc = 0x37F88Cu;
    // 0x37f88c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f890: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f894: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f898: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x37F898u;
    {
        const bool branch_taken_0x37f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F898u;
        // 0x37f89c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f898) {
            ctx->pc = 0x37FA74u;
            goto label_37fa74;
        }
    }
    ctx->pc = 0x37F8A0u;
    // 0x37f8a0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x37F8A0u;
    {
        const bool branch_taken_0x37f8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8A0u;
        // 0x37f8a4: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8a0) {
            ctx->pc = 0x37FA88u;
            goto label_37fa88;
        }
    }
    ctx->pc = 0x37F8A8u;
label_37f8a8:
    // 0x37f8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8ac: 0xc0ed18a  jal         func_3B4628
    ctx->pc = 0x37F8ACu;
    SET_GPR_U32(ctx, 31, 0x37F8B4u);
    ctx->pc = 0x37F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F8ACu;
    // 0x37f8b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4628u, 0x37F8ACu, 0x37F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F8B4u;
label_37f8b4:
    // 0x37f8b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37f8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8c0: 0xc0ed18a  jal         func_3B4628
    ctx->pc = 0x37F8C0u;
    SET_GPR_U32(ctx, 31, 0x37F8C8u);
    ctx->pc = 0x37F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F8C0u;
    // 0x37f8c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4628u, 0x37F8C0u, 0x37F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F8C8u;
label_37f8c8:
    // 0x37f8c8: 0xc0c7224  jal         func_31C890
    ctx->pc = 0x37F8C8u;
    SET_GPR_U32(ctx, 31, 0x37F8D0u);
    ctx->pc = 0x37F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F8C8u;
    // 0x37f8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C890u, 0x37F8C8u, 0x37F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F8D0u;
label_37f8d0:
    // 0x37f8d0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37F8D0u;
    {
        const bool branch_taken_0x37f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8D0u;
        // 0x37f8d4: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8d0) {
            ctx->pc = 0x37F930u;
            goto label_37f930;
        }
    }
    ctx->pc = 0x37F8D8u;
    // 0x37f8d8: 0xc0ed12c  jal         func_3B44B0
    ctx->pc = 0x37F8D8u;
    SET_GPR_U32(ctx, 31, 0x37F8E0u);
    ctx->pc = 0x37F8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F8D8u;
    // 0x37f8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44B0u, 0x37F8D8u, 0x37F8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F8E0u;
label_37f8e0:
    // 0x37f8e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x37f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x37f8e4: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x37F8E4u;
    SET_GPR_U32(ctx, 31, 0x37F8ECu);
    ctx->pc = 0x37F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F8E4u;
    // 0x37f8e8: 0x2484c220  addiu       $a0, $a0, -0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x37F8E4u, 0x37F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F8ECu;
label_37f8ec:
    // 0x37f8ec: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37f8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f8f4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x37f8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x37f8f8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x37f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x37f8fc: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x37f8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_37f900:
    // 0x37f900: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f904: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f908: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f90c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x37F90Cu;
    {
        const bool branch_taken_0x37f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F90Cu;
        // 0x37f910: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f90c) {
            ctx->pc = 0x37F874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f874;
        }
    }
    ctx->pc = 0x37F914u;
    // 0x37f914: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f918: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f91c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f91cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f920: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x37F920u;
    {
        const bool branch_taken_0x37f920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F920u;
        // 0x37f924: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f920) {
            ctx->pc = 0x37F840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f840;
        }
    }
    ctx->pc = 0x37F928u;
    // 0x37f928: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x37F928u;
    {
        const bool branch_taken_0x37f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F928u;
        // 0x37f92c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f928) {
            ctx->pc = 0x37F854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f854;
        }
    }
    ctx->pc = 0x37F930u;
label_37f930:
    // 0x37f930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37f930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f934: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37f934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f938: 0xc0ed21a  jal         func_3B4868
    ctx->pc = 0x37F938u;
    SET_GPR_U32(ctx, 31, 0x37F940u);
    ctx->pc = 0x37F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F938u;
    // 0x37f93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4868u, 0x37F938u, 0x37F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F940u;
label_37f940:
    // 0x37f940: 0xc0ed12c  jal         func_3B44B0
    ctx->pc = 0x37F940u;
    SET_GPR_U32(ctx, 31, 0x37F948u);
    ctx->pc = 0x37F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F940u;
    // 0x37f944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44B0u, 0x37F940u, 0x37F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F948u;
label_37f948:
    // 0x37f948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f94c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37f94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f950: 0xc0e02ba  jal         func_380AE8
    ctx->pc = 0x37F950u;
    SET_GPR_U32(ctx, 31, 0x37F958u);
    ctx->pc = 0x37F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F950u;
    // 0x37f954: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AE8u, 0x37F950u, 0x37F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F958u;
label_37f958:
    // 0x37f958: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x37F958u;
    {
        const bool branch_taken_0x37f958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f958) {
            ctx->pc = 0x37F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F958u;
            // 0x37f95c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F974u;
            goto label_37f974;
        }
    }
    ctx->pc = 0x37F960u;
    // 0x37f960: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x37f960u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x37f964: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x37f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x37f968: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37f968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f96c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x37F96Cu;
    {
        const bool branch_taken_0x37f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F96Cu;
        // 0x37f970: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f96c) {
            ctx->pc = 0x37F900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f900;
        }
    }
    ctx->pc = 0x37F974u;
label_37f974:
    // 0x37f974: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x37f974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x37f978: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x37f978u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x37f97c: 0x9465215e  lhu         $a1, 0x215E($v1)
    ctx->pc = 0x37f97cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x3F215Eu));
    // 0x37f980: 0xa6650004  sh          $a1, 0x4($s3)
    ctx->pc = 0x37f980u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x37f984: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37f984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37f988: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x37f988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x37f98c: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x37F98Cu;
    SET_GPR_U32(ctx, 31, 0x37F994u);
    ctx->pc = 0x37F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F98Cu;
    // 0x37f990: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x37F98Cu, 0x37F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F994u;
label_37f994:
    // 0x37f994: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x37f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x37f998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f99c: 0xa662000a  sh          $v0, 0xA($s3)
    ctx->pc = 0x37f99cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x37f9a0: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x37f9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x37f9a4: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x37f9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x37f9a8: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x37F9A8u;
    SET_GPR_U32(ctx, 31, 0x37F9B0u);
    ctx->pc = 0x37F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F9A8u;
    // 0x37f9ac: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x37F9A8u, 0x37F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9B0u;
label_37f9b0:
    // 0x37f9b0: 0x8666000a  lh          $a2, 0xA($s3)
    ctx->pc = 0x37f9b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x37f9b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f9b8: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x37F9B8u;
    SET_GPR_U32(ctx, 31, 0x37F9C0u);
    ctx->pc = 0x37F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F9B8u;
    // 0x37f9bc: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x37F9B8u, 0x37F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9C0u;
label_37f9c0:
    // 0x37f9c0: 0xc0caa62  jal         func_32A988
    ctx->pc = 0x37F9C0u;
    SET_GPR_U32(ctx, 31, 0x37F9C8u);
    ctx->pc = 0x37F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F9C0u;
    // 0x37f9c4: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A988u, 0x37F9C0u, 0x37F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9C8u;
label_37f9c8:
    // 0x37f9c8: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x37f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x37f9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37f9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9d0: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x37f9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f9d4: 0x8e650084  lw          $a1, 0x84($s3)
    ctx->pc = 0x37f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x37f9d8: 0xc0caf70  jal         func_32BDC0
    ctx->pc = 0x37F9D8u;
    SET_GPR_U32(ctx, 31, 0x37F9E0u);
    ctx->pc = 0x37F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F9D8u;
    // 0x37f9dc: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BDC0u, 0x37F9D8u, 0x37F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9E0u;
label_37f9e0:
    // 0x37f9e0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f9e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x37f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37f9e8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x37f9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37f9ec: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f9f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f9f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f9f8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F9F8u;
    {
        const bool branch_taken_0x37f9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F9F8u;
        // 0x37f9fc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f9f8) {
            ctx->pc = 0x37FA48u;
            goto label_37fa48;
        }
    }
    ctx->pc = 0x37FA00u;
    // 0x37fa00: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37fa04: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37fa08: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37fa08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37fa0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37FA0Cu;
    {
        const bool branch_taken_0x37fa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA0Cu;
        // 0x37fa10: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa0c) {
            ctx->pc = 0x37FA24u;
            goto label_37fa24;
        }
    }
    ctx->pc = 0x37FA14u;
    // 0x37fa14: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37FA14u;
    SET_GPR_U32(ctx, 31, 0x37FA1Cu);
    ctx->pc = 0x37FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA14u;
    // 0x37fa18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37FA14u, 0x37FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA1Cu;
label_37fa1c:
    // 0x37fa1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37FA1Cu;
    {
        const bool branch_taken_0x37fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA1Cu;
        // 0x37fa20: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa1c) {
            ctx->pc = 0x37FA4Cu;
            goto label_37fa4c;
        }
    }
    ctx->pc = 0x37FA24u;
label_37fa24:
    // 0x37fa24: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37fa28: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37fa2c: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37fa30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37fa34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37fa38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37fa3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37fa40: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37fa44: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37fa48:
    // 0x37fa48: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37fa4c:
    // 0x37fa4c: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37fa50: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37fa54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37fa58: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37FA58u;
    {
        const bool branch_taken_0x37fa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA58u;
        // 0x37fa5c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa58) {
            ctx->pc = 0x37FAA8u;
            goto label_37faa8;
        }
    }
    ctx->pc = 0x37FA60u;
    // 0x37fa60: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37fa64: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37fa68: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37fa68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37fa6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37FA6Cu;
    {
        const bool branch_taken_0x37fa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA6Cu;
        // 0x37fa70: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa6c) {
            ctx->pc = 0x37FA84u;
            goto label_37fa84;
        }
    }
    ctx->pc = 0x37FA74u;
label_37fa74:
    // 0x37fa74: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37FA74u;
    SET_GPR_U32(ctx, 31, 0x37FA7Cu);
    ctx->pc = 0x37FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA74u;
    // 0x37fa78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37FA74u, 0x37FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA7Cu;
label_37fa7c:
    // 0x37fa7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37FA7Cu;
    {
        const bool branch_taken_0x37fa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA7Cu;
        // 0x37fa80: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa7c) {
            ctx->pc = 0x37FAACu;
            goto label_37faac;
        }
    }
    ctx->pc = 0x37FA84u;
label_37fa84:
    // 0x37fa84: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_37fa88:
    // 0x37fa88: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37fa8c: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37fa90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37fa94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37fa98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37fa9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37faa0: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37faa4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37faa8:
    // 0x37faa8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37faa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37faac:
    // 0x37faac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37faacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37fab0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37fab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37fab4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37fab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37fab8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37fab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fabc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37fabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fac0: 0x3e00008  jr          $ra
    ctx->pc = 0x37FAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FAC0u;
        // 0x37fac4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FAC8u;
}
