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

// Function: func_001F1918
// Address: 0x1f1918 - 0x1f1b18
void func_001F1918_0x1f1918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F1918_0x1f1918");
#endif

    switch (ctx->pc) {
        case 0x1f194cu: goto label_1f194c;
        case 0x1f196cu: goto label_1f196c;
        case 0x1f1988u: goto label_1f1988;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f19b4u: goto label_1f19b4;
        case 0x1f19d0u: goto label_1f19d0;
        case 0x1f19d8u: goto label_1f19d8;
        case 0x1f19fcu: goto label_1f19fc;
        case 0x1f1a18u: goto label_1f1a18;
        case 0x1f1a20u: goto label_1f1a20;
        case 0x1f1a44u: goto label_1f1a44;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a8cu: goto label_1f1a8c;
        case 0x1f1aa8u: goto label_1f1aa8;
        case 0x1f1ab0u: goto label_1f1ab0;
        case 0x1f1ad4u: goto label_1f1ad4;
        case 0x1f1af0u: goto label_1f1af0;
        case 0x1f1af8u: goto label_1f1af8;
        default: break;
    }

    ctx->pc = 0x1f1918u;

    // 0x1f1918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f191c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f1920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1928: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f192c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F192Cu;
    {
        const bool branch_taken_0x1f192c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F192Cu;
        // 0x1f1930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f192c) {
            ctx->pc = 0x1F1944u;
            goto label_1f1944;
        }
    }
    ctx->pc = 0x1F1934u;
    // 0x1f1934: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1934u;
    {
        const bool branch_taken_0x1f1934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1934) {
            ctx->pc = 0x1F1938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1934u;
            // 0x1f1938: 0x8e040c64  lw          $a0, 0xC64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F195Cu;
            goto label_1f195c;
        }
    }
    ctx->pc = 0x1F193Cu;
    // 0x1f193c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1F193Cu;
    {
        const bool branch_taken_0x1f193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F193Cu;
        // 0x1f1940: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f193c) {
            ctx->pc = 0x1F1B0Cu;
            goto label_1f1b0c;
        }
    }
    ctx->pc = 0x1F1944u;
label_1f1944:
    // 0x1f1944: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F1944u;
    SET_GPR_U32(ctx, 31, 0x1F194Cu);
    ctx->pc = 0x1F1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1944u;
    // 0x1f1948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F1944u, 0x1F194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F194Cu;
label_1f194c:
    // 0x1f194c: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1954: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F1954u;
    {
        const bool branch_taken_0x1f1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1954u;
        // 0x1f1958: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1954) {
            ctx->pc = 0x1F1B08u;
            goto label_1f1b08;
        }
    }
    ctx->pc = 0x1F195Cu;
label_1f195c:
    // 0x1f195c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F195Cu;
    {
        const bool branch_taken_0x1f195c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f195c) {
            ctx->pc = 0x1F1960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F195Cu;
            // 0x1f1960: 0x8e040c68  lw          $a0, 0xC68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19A4u;
            goto label_1f19a4;
        }
    }
    ctx->pc = 0x1F1964u;
    // 0x1f1964: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1964u;
    SET_GPR_U32(ctx, 31, 0x1F196Cu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1964u, 0x1F196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F196Cu;
label_1f196c:
    // 0x1f196c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F196Cu;
    {
        const bool branch_taken_0x1f196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F196Cu;
        // 0x1f1970: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f196c) {
            ctx->pc = 0x1F19A0u;
            goto label_1f19a0;
        }
    }
    ctx->pc = 0x1F1974u;
    // 0x1f1974: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1978: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f197c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1980: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1980u;
    SET_GPR_U32(ctx, 31, 0x1F1988u);
    ctx->pc = 0x1F1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1980u;
    // 0x1f1984: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1980u, 0x1F1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1988u;
label_1f1988:
    // 0x1f1988: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1988u;
    SET_GPR_U32(ctx, 31, 0x1F1990u);
    ctx->pc = 0x1F198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1988u;
    // 0x1f198c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1988u, 0x1F1990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1990u;
label_1f1990:
    // 0x1f1990: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1994: 0xae000c64  sw          $zero, 0xC64($s0)
    ctx->pc = 0x1f1994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 0));
    // 0x1f1998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f199c: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f199cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f19a0:
    // 0x1f19a0: 0x8e040c68  lw          $a0, 0xC68($s0)
    ctx->pc = 0x1f19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
label_1f19a4:
    // 0x1f19a4: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F19A4u;
    {
        const bool branch_taken_0x1f19a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f19a4) {
            ctx->pc = 0x1F19A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19A4u;
            // 0x1f19a8: 0x8e040c6c  lw          $a0, 0xC6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19ECu;
            goto label_1f19ec;
        }
    }
    ctx->pc = 0x1F19ACu;
    // 0x1f19ac: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F19ACu;
    SET_GPR_U32(ctx, 31, 0x1F19B4u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F19ACu, 0x1F19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19B4u;
label_1f19b4:
    // 0x1f19b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F19B4u;
    {
        const bool branch_taken_0x1f19b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19B4u;
        // 0x1f19b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19b4) {
            ctx->pc = 0x1F19E8u;
            goto label_1f19e8;
        }
    }
    ctx->pc = 0x1F19BCu;
    // 0x1f19bc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f19c0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f19c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f19c4: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f19c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f19c8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F19C8u;
    SET_GPR_U32(ctx, 31, 0x1F19D0u);
    ctx->pc = 0x1F19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19C8u;
    // 0x1f19cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F19C8u, 0x1F19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19D0u;
label_1f19d0:
    // 0x1f19d0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F19D0u;
    SET_GPR_U32(ctx, 31, 0x1F19D8u);
    ctx->pc = 0x1F19D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19D0u;
    // 0x1f19d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F19D0u, 0x1F19D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19D8u;
label_1f19d8:
    // 0x1f19d8: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f19dc: 0xae000c68  sw          $zero, 0xC68($s0)
    ctx->pc = 0x1f19dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3176), GPR_U32(ctx, 0));
    // 0x1f19e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f19e4: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f19e8:
    // 0x1f19e8: 0x8e040c6c  lw          $a0, 0xC6C($s0)
    ctx->pc = 0x1f19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
label_1f19ec:
    // 0x1f19ec: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F19ECu;
    {
        const bool branch_taken_0x1f19ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f19ec) {
            ctx->pc = 0x1F19F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19ECu;
            // 0x1f19f0: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A34u;
            goto label_1f1a34;
        }
    }
    ctx->pc = 0x1F19F4u;
    // 0x1f19f4: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F19F4u;
    SET_GPR_U32(ctx, 31, 0x1F19FCu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F19F4u, 0x1F19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19FCu;
label_1f19fc:
    // 0x1f19fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F19FCu;
    {
        const bool branch_taken_0x1f19fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19FCu;
        // 0x1f1a00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19fc) {
            ctx->pc = 0x1F1A30u;
            goto label_1f1a30;
        }
    }
    ctx->pc = 0x1F1A04u;
    // 0x1f1a04: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1a08: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1a08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1a0c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1a10: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1A10u;
    SET_GPR_U32(ctx, 31, 0x1F1A18u);
    ctx->pc = 0x1F1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A10u;
    // 0x1f1a14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1A10u, 0x1F1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A18u;
label_1f1a18:
    // 0x1f1a18: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1A18u;
    SET_GPR_U32(ctx, 31, 0x1F1A20u);
    ctx->pc = 0x1F1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A18u;
    // 0x1f1a1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1A18u, 0x1F1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A20u;
label_1f1a20:
    // 0x1f1a20: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1a24: 0xae000c6c  sw          $zero, 0xC6C($s0)
    ctx->pc = 0x1f1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3180), GPR_U32(ctx, 0));
    // 0x1f1a28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1a2c: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f1a30:
    // 0x1f1a30: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x1f1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_1f1a34:
    // 0x1f1a34: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1A34u;
    {
        const bool branch_taken_0x1f1a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a34) {
            ctx->pc = 0x1F1A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A34u;
            // 0x1f1a38: 0x8e040c74  lw          $a0, 0xC74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A7Cu;
            goto label_1f1a7c;
        }
    }
    ctx->pc = 0x1F1A3Cu;
    // 0x1f1a3c: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A44u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1A3Cu, 0x1F1A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A44u;
label_1f1a44:
    // 0x1f1a44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1A44u;
    {
        const bool branch_taken_0x1f1a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A44u;
        // 0x1f1a48: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a44) {
            ctx->pc = 0x1F1A78u;
            goto label_1f1a78;
        }
    }
    ctx->pc = 0x1F1A4Cu;
    // 0x1f1a4c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1a50: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1a50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1a54: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1a58: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1A58u;
    SET_GPR_U32(ctx, 31, 0x1F1A60u);
    ctx->pc = 0x1F1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A58u;
    // 0x1f1a5c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1A58u, 0x1F1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A60u;
label_1f1a60:
    // 0x1f1a60: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1A60u;
    SET_GPR_U32(ctx, 31, 0x1F1A68u);
    ctx->pc = 0x1F1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A60u;
    // 0x1f1a64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1A60u, 0x1F1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A68u;
label_1f1a68:
    // 0x1f1a68: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1a6c: 0xae000c70  sw          $zero, 0xC70($s0)
    ctx->pc = 0x1f1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
    // 0x1f1a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1a74: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f1a78:
    // 0x1f1a78: 0x8e040c74  lw          $a0, 0xC74($s0)
    ctx->pc = 0x1f1a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3188)));
label_1f1a7c:
    // 0x1f1a7c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1A7Cu;
    {
        const bool branch_taken_0x1f1a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a7c) {
            ctx->pc = 0x1F1A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A7Cu;
            // 0x1f1a80: 0x8e040c78  lw          $a0, 0xC78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1AC4u;
            goto label_1f1ac4;
        }
    }
    ctx->pc = 0x1F1A84u;
    // 0x1f1a84: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1A84u;
    SET_GPR_U32(ctx, 31, 0x1F1A8Cu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1A84u, 0x1F1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A8Cu;
label_1f1a8c:
    // 0x1f1a8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1A8Cu;
    {
        const bool branch_taken_0x1f1a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A8Cu;
        // 0x1f1a90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a8c) {
            ctx->pc = 0x1F1AC0u;
            goto label_1f1ac0;
        }
    }
    ctx->pc = 0x1F1A94u;
    // 0x1f1a94: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1a98: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1a98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1a9c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1aa0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1AA0u;
    SET_GPR_U32(ctx, 31, 0x1F1AA8u);
    ctx->pc = 0x1F1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1AA0u;
    // 0x1f1aa4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1AA0u, 0x1F1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AA8u;
label_1f1aa8:
    // 0x1f1aa8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1AA8u;
    SET_GPR_U32(ctx, 31, 0x1F1AB0u);
    ctx->pc = 0x1F1AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1AA8u;
    // 0x1f1aac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1AA8u, 0x1F1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AB0u;
label_1f1ab0:
    // 0x1f1ab0: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1ab4: 0xae000c74  sw          $zero, 0xC74($s0)
    ctx->pc = 0x1f1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3188), GPR_U32(ctx, 0));
    // 0x1f1ab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1abc: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f1ac0:
    // 0x1f1ac0: 0x8e040c78  lw          $a0, 0xC78($s0)
    ctx->pc = 0x1f1ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3192)));
label_1f1ac4:
    // 0x1f1ac4: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1AC4u;
    {
        const bool branch_taken_0x1f1ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ac4) {
            ctx->pc = 0x1F1AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1AC4u;
            // 0x1f1ac8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B0Cu;
            goto label_1f1b0c;
        }
    }
    ctx->pc = 0x1F1ACCu;
    // 0x1f1acc: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1ACCu;
    SET_GPR_U32(ctx, 31, 0x1F1AD4u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1ACCu, 0x1F1AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AD4u;
label_1f1ad4:
    // 0x1f1ad4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1AD4u;
    {
        const bool branch_taken_0x1f1ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AD4u;
        // 0x1f1ad8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ad4) {
            ctx->pc = 0x1F1B08u;
            goto label_1f1b08;
        }
    }
    ctx->pc = 0x1F1ADCu;
    // 0x1f1adc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1ae0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1ae4: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1ae8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1AE8u;
    SET_GPR_U32(ctx, 31, 0x1F1AF0u);
    ctx->pc = 0x1F1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1AE8u;
    // 0x1f1aec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1AE8u, 0x1F1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AF0u;
label_1f1af0:
    // 0x1f1af0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1AF0u;
    SET_GPR_U32(ctx, 31, 0x1F1AF8u);
    ctx->pc = 0x1F1AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1AF0u;
    // 0x1f1af4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1AF0u, 0x1F1AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AF8u;
label_1f1af8:
    // 0x1f1af8: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1afc: 0xae000c78  sw          $zero, 0xC78($s0)
    ctx->pc = 0x1f1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3192), GPR_U32(ctx, 0));
    // 0x1f1b00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1b04: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f1b08:
    // 0x1f1b08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f1b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1b0c:
    // 0x1f1b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1b10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B10u;
        // 0x1f1b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1B18u;
}
