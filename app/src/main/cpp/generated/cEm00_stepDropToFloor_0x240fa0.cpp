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

// Function: cEm00_stepDropToFloor
// Address: 0x240fa0 - 0x2412a8
void cEm00_stepDropToFloor_0x240fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepDropToFloor_0x240fa0");
#endif

    switch (ctx->pc) {
        case 0x241008u: goto label_241008;
        case 0x241034u: goto label_241034;
        case 0x241058u: goto label_241058;
        case 0x241078u: goto label_241078;
        case 0x241098u: goto label_241098;
        case 0x2410a4u: goto label_2410a4;
        case 0x241154u: goto label_241154;
        case 0x24117cu: goto label_24117c;
        case 0x2411a0u: goto label_2411a0;
        case 0x241214u: goto label_241214;
        case 0x241228u: goto label_241228;
        case 0x241238u: goto label_241238;
        case 0x241268u: goto label_241268;
        case 0x24127cu: goto label_24127c;
        case 0x241288u: goto label_241288;
        default: break;
    }

    ctx->pc = 0x240fa0u;

    // 0x240fa0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x240fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x240fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240fa8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x240fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x240fac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x240facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x240fb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fb4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x240fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x240fb8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x240fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x240fbc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x240fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x240fc0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x240fc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x240fc4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x240fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x240fc8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x240FC8u;
    {
        const bool branch_taken_0x240fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FC8u;
        // 0x240fcc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fc8) {
            ctx->pc = 0x241040u;
            goto label_241040;
        }
    }
    ctx->pc = 0x240FD0u;
    // 0x240fd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x240FD0u;
    {
        const bool branch_taken_0x240fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fd0) {
            ctx->pc = 0x240FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240FD0u;
            // 0x240fd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FE8u;
            goto label_240fe8;
        }
    }
    ctx->pc = 0x240FD8u;
    // 0x240fd8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x240FD8u;
    {
        const bool branch_taken_0x240fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FD8u;
        // 0x240fdc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fd8) {
            ctx->pc = 0x241000u;
            goto label_241000;
        }
    }
    ctx->pc = 0x240FE0u;
    // 0x240fe0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x240FE0u;
    {
        const bool branch_taken_0x240fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FE0u;
        // 0x240fe4: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fe0) {
            ctx->pc = 0x241290u;
            goto label_241290;
        }
    }
    ctx->pc = 0x240FE8u;
label_240fe8:
    // 0x240fe8: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x240FE8u;
    {
        const bool branch_taken_0x240fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FE8u;
        // 0x240fec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fe8) {
            ctx->pc = 0x241174u;
            goto label_241174;
        }
    }
    ctx->pc = 0x240FF0u;
    // 0x240ff0: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x240FF0u;
    {
        const bool branch_taken_0x240ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FF0u;
        // 0x240ff4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ff0) {
            ctx->pc = 0x241220u;
            goto label_241220;
        }
    }
    ctx->pc = 0x240FF8u;
    // 0x240ff8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x240FF8u;
    {
        const bool branch_taken_0x240ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FF8u;
        // 0x240ffc: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ff8) {
            ctx->pc = 0x241290u;
            goto label_241290;
        }
    }
    ctx->pc = 0x241000u;
label_241000:
    // 0x241000: 0xc09d91a  jal         func_276468
    ctx->pc = 0x241000u;
    SET_GPR_U32(ctx, 31, 0x241008u);
    ctx->pc = 0x241004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241000u;
    // 0x241004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x241000u, 0x241008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241008u;
label_241008:
    // 0x241008: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x241008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24100c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24100cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x241010: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241018: 0x8c650434  lw          $a1, 0x434($v1)
    ctx->pc = 0x241018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1076)));
    // 0x24101c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24101cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241020: 0x8c660438  lw          $a2, 0x438($v1)
    ctx->pc = 0x241020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
    // 0x241024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241028: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x241028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24102c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24102Cu;
    SET_GPR_U32(ctx, 31, 0x241034u);
    ctx->pc = 0x241030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24102Cu;
    // 0x241030: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24102Cu, 0x241034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241034u;
label_241034:
    // 0x241034: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x241034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x241038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24103c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x24103cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_241040:
    // 0x241040: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x241040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x241044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241048: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24104c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x24104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x241050: 0xc0989d4  jal         func_262750
    ctx->pc = 0x241050u;
    SET_GPR_U32(ctx, 31, 0x241058u);
    ctx->pc = 0x241054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241050u;
    // 0x241054: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x241050u, 0x241058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241058u;
label_241058:
    // 0x241058: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x24105c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x241060: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x241064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24106c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241070: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241070u;
    SET_GPR_U32(ctx, 31, 0x241078u);
    ctx->pc = 0x241074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241070u;
    // 0x241074: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241070u, 0x241078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241078u;
label_241078:
    // 0x241078: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x241078u;
    {
        const bool branch_taken_0x241078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241078u;
        // 0x24107c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241078) {
            ctx->pc = 0x241084u;
            goto label_241084;
        }
    }
    ctx->pc = 0x241080u;
    // 0x241080: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x241080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_241084:
    // 0x241084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24108c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241090: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241090u;
    SET_GPR_U32(ctx, 31, 0x241098u);
    ctx->pc = 0x241094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241090u;
    // 0x241094: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241090u, 0x241098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241098u;
label_241098:
    // 0x241098: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x241098u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24109c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24109Cu;
    SET_GPR_U32(ctx, 31, 0x2410A4u);
    ctx->pc = 0x2410A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24109Cu;
    // 0x2410a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24109Cu, 0x2410A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410A4u;
label_2410a4:
    // 0x2410a4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2410a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2410a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2410a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2410ac: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2410ACu;
    {
        const bool branch_taken_0x2410ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410ACu;
        // 0x2410b0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410ac) {
            ctx->pc = 0x241288u;
            goto label_241288;
        }
    }
    ctx->pc = 0x2410B4u;
    // 0x2410b4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2410b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2410b8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2410b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2410bc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2410bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2410c0: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x2410c4: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2410C4u;
    {
        const bool branch_taken_0x2410c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2410c4) {
            ctx->pc = 0x2410C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2410C4u;
            // 0x2410c8: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2410E8u;
            goto label_2410e8;
        }
    }
    ctx->pc = 0x2410CCu;
    // 0x2410cc: 0xc6200490  lwc1        $f0, 0x490($s1)
    ctx->pc = 0x2410ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410d0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2410d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2410d4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2410d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2410d8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2410d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2410dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2410dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410e0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2410e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2410e4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2410e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_2410e8:
    // 0x2410e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2410ec: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2410ECu;
    {
        const bool branch_taken_0x2410ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2410F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410ECu;
        // 0x2410f0: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410ec) {
            ctx->pc = 0x241110u;
            goto label_241110;
        }
    }
    ctx->pc = 0x2410F4u;
    // 0x2410f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2410f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410f8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2410f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2410fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2410fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241100: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x241100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x241104: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x241104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241108: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x241108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24110c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x24110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241110:
    // 0x241110: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x241110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241114: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x241114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x241118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24111c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x24111cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x241120: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x241120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x241124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x241124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x241128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24112c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24112cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x241130: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x241130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x241134: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x241134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241138: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x241138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x24113c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24113cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241140: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x241140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x241144: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241144u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241148: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x241148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x24114c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x24114Cu;
    SET_GPR_U32(ctx, 31, 0x241154u);
    ctx->pc = 0x241150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24114Cu;
    // 0x241150: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x24114Cu, 0x241154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241154u;
label_241154:
    // 0x241154: 0x1450004d  bne         $v0, $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x241154u;
    {
        const bool branch_taken_0x241154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x241158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241154u;
        // 0x241158: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241154) {
            ctx->pc = 0x24128Cu;
            goto label_24128c;
        }
    }
    ctx->pc = 0x24115Cu;
    // 0x24115c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x24115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241160: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241164: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x241164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x241168: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x241168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24116c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x24116Cu;
    {
        const bool branch_taken_0x24116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24116Cu;
        // 0x241170: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24116c) {
            ctx->pc = 0x24128Cu;
            goto label_24128c;
        }
    }
    ctx->pc = 0x241174u;
label_241174:
    // 0x241174: 0xc09d91a  jal         func_276468
    ctx->pc = 0x241174u;
    SET_GPR_U32(ctx, 31, 0x24117Cu);
    ctx->pc = 0x241178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241174u;
    // 0x241178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x241174u, 0x24117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24117Cu;
label_24117c:
    // 0x24117c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x24117cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x241180: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x241180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x241184: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x241184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x241188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24118c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x24118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x241190: 0x8c460110  lw          $a2, 0x110($v0)
    ctx->pc = 0x241190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x241194: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x241194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241198: 0xc09b9ea  jal         func_26E7A8
    ctx->pc = 0x241198u;
    SET_GPR_U32(ctx, 31, 0x2411A0u);
    ctx->pc = 0x24119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241198u;
    // 0x24119c: 0xc29021  addu        $s2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E7A8u, 0x241198u, 0x2411A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411A0u;
label_2411a0:
    // 0x2411a0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x2411a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2411a4: 0x262306d0  addiu       $v1, $s1, 0x6D0
    ctx->pc = 0x2411a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
    // 0x2411a8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2411a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2411ac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2411acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2411b0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2411b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2411b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2411b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2411b8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2411b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2411bc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2411c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2411c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2411c4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2411c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2411c8: 0x26230580  addiu       $v1, $s1, 0x580
    ctx->pc = 0x2411c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x2411cc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2411d0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2411D0u;
    {
        const bool branch_taken_0x2411d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2411D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411D0u;
        // 0x2411d4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411d0) {
            ctx->pc = 0x2411ECu;
            goto label_2411ec;
        }
    }
    ctx->pc = 0x2411D8u;
    // 0x2411d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2411d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2411dc: 0xe6200580  swc1        $f0, 0x580($s1)
    ctx->pc = 0x2411dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
    // 0x2411e0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2411e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2411e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2411e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2411e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2411e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2411ec:
    // 0x2411ec: 0xc62006e0  lwc1        $f0, 0x6E0($s1)
    ctx->pc = 0x2411ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2411f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2411f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2411f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2411f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2411f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2411f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2411fc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2411fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x241200: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x241200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241208: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x241208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24120c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24120Cu;
    SET_GPR_U32(ctx, 31, 0x241214u);
    ctx->pc = 0x241210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24120Cu;
    // 0x241210: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24120Cu, 0x241214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241214u;
label_241214:
    // 0x241214: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x241214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x241218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24121c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x24121cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_241220:
    // 0x241220: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241220u;
    SET_GPR_U32(ctx, 31, 0x241228u);
    ctx->pc = 0x241224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241220u;
    // 0x241224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241220u, 0x241228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241228u;
label_241228:
    // 0x241228: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x241228u;
    {
        const bool branch_taken_0x241228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241228) {
            ctx->pc = 0x241268u;
            goto label_241268;
        }
    }
    ctx->pc = 0x241230u;
    // 0x241230: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x241230u;
    SET_GPR_U32(ctx, 31, 0x241238u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x241230u, 0x241238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241238u;
label_241238:
    // 0x241238: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x241238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x24123c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24123cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x241240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241244: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x241244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x241248: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x241248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24124c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24124cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x241250: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x241250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x241254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241258: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x241258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24125c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24125cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241260: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x241260u;
    SET_GPR_U32(ctx, 31, 0x241268u);
    ctx->pc = 0x241264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241260u;
    // 0x241264: 0xe62016e4  swc1        $f0, 0x16E4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5860), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x241260u, 0x241268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241268u;
label_241268:
    // 0x241268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24126c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24126cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241274: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241274u;
    SET_GPR_U32(ctx, 31, 0x24127Cu);
    ctx->pc = 0x241278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241274u;
    // 0x241278: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241274u, 0x24127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24127Cu;
label_24127c:
    // 0x24127c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241280: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241280u;
    SET_GPR_U32(ctx, 31, 0x241288u);
    ctx->pc = 0x241284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241280u;
    // 0x241284: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241280u, 0x241288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241288u;
label_241288:
    // 0x241288: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x241288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24128c:
    // 0x24128c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x24128cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_241290:
    // 0x241290: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x241290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x241294: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x241294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241298: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x241298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24129c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x24129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2412a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2412A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2412A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A0u;
        // 0x2412a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2412A8u;
}
