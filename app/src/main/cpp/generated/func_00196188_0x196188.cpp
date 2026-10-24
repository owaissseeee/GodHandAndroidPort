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

// Function: func_00196188
// Address: 0x196188 - 0x1965f8
void func_00196188_0x196188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00196188_0x196188");
#endif

    switch (ctx->pc) {
        case 0x1961c8u: goto label_1961c8;
        case 0x196224u: goto label_196224;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962c8u: goto label_1962c8;
        case 0x196330u: goto label_196330;
        case 0x196360u: goto label_196360;
        case 0x196388u: goto label_196388;
        case 0x196398u: goto label_196398;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963e8u: goto label_1963e8;
        case 0x19650cu: goto label_19650c;
        case 0x196530u: goto label_196530;
        case 0x196568u: goto label_196568;
        case 0x1965b4u: goto label_1965b4;
        default: break;
    }

    ctx->pc = 0x196188u;

    // 0x196188: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x196188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x19618c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x19618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x196190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196194: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x196194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x196198: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x196198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x19619c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x19619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1961a0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1961a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1961a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1961a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1961a8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1961a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961ac: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1961acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1961b0: 0x3c140042  lui         $s4, 0x42
    ctx->pc = 0x1961b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)66 << 16));
    // 0x1961b4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1961b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1961b8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1961b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1961bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1961bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1961c0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1961C0u;
    SET_GPR_U32(ctx, 31, 0x1961C8u);
    ctx->pc = 0x1961C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961C0u;
    // 0x1961c4: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1961C0u, 0x1961C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961C8u;
label_1961c8:
    // 0x1961c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1961c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1961cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1961ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1961d0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1961d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1961d4: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x1961d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1961d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1961dc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1961dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1961e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1961e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1961e8: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1961e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1961ec: 0x3c0140b9  lui         $at, 0x40B9
    ctx->pc = 0x1961ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16569 << 16));
    // 0x1961f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1961f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1961f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1961f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1961f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1961f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1961fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1961fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x196200: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x196200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196204: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x196204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x196208: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x196208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19620c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x19620cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x196210: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x196210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x196214: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x196214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x196218: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x196218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x19621c: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x19621Cu;
    SET_GPR_U32(ctx, 31, 0x196224u);
    ctx->pc = 0x196220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19621Cu;
    // 0x196220: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x19621Cu, 0x196224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196224u;
label_196224:
    // 0x196224: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x196224u;
    {
        const bool branch_taken_0x196224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196224u;
        // 0x196228: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196224) {
            ctx->pc = 0x1962C8u;
            goto label_1962c8;
        }
    }
    ctx->pc = 0x19622Cu;
    // 0x19622c: 0x26824ed0  addiu       $v0, $s4, 0x4ED0
    ctx->pc = 0x19622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20176));
    // 0x196230: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x196230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x196234: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x196234u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x196238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19623c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x19623cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196240u;
    {
        const bool branch_taken_0x196240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196240u;
        // 0x196244: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196240) {
            ctx->pc = 0x196250u;
            goto label_196250;
        }
    }
    ctx->pc = 0x196248u;
    // 0x196248: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x196248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19624c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19624cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196250:
    // 0x196250: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x196250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x196254: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196254u;
    {
        const bool branch_taken_0x196254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196254u;
        // 0x196258: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196254) {
            ctx->pc = 0x19626Cu;
            goto label_19626c;
        }
    }
    ctx->pc = 0x19625Cu;
    // 0x19625c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x196260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196264: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196264u;
    {
        const bool branch_taken_0x196264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196264u;
        // 0x196268: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196264) {
            ctx->pc = 0x196270u;
            goto label_196270;
        }
    }
    ctx->pc = 0x19626Cu;
label_19626c:
    // 0x19626c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19626cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196270:
    // 0x196270: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x196270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x196274: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x196274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196278: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x196278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19627c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x196280: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x196280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x196284: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x196284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x196288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19628c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19628cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196290: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x196290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196294: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x196294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x196298: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x196298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19629c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19629Cu;
    SET_GPR_U32(ctx, 31, 0x1962A4u);
    ctx->pc = 0x1962A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19629Cu;
    // 0x1962a0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19629Cu, 0x1962A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962A4u;
label_1962a4:
    // 0x1962a4: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1962a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1962a8: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1962a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1962ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1962acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1962b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1962b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962b4: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1962b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1962b8: 0x8e220604  lw          $v0, 0x604($s1)
    ctx->pc = 0x1962b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1962bc: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1962bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1962c0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1962C0u;
    SET_GPR_U32(ctx, 31, 0x1962C8u);
    ctx->pc = 0x1962C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962C0u;
    // 0x1962c4: 0x8e240604  lw          $a0, 0x604($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1962C0u, 0x1962C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962C8u;
label_1962c8:
    // 0x1962c8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1962c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1962cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1962ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1962d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1962d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1962d4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1962d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1962d8: 0x3c014059  lui         $at, 0x4059
    ctx->pc = 0x1962d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16473 << 16));
    // 0x1962dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1962dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1962e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1962e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1962e4: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1962e8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1962e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1962ec: 0x26644380  addiu       $a0, $s3, 0x4380
    ctx->pc = 0x1962ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    // 0x1962f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1962f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1962f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1962f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1962f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962fc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1962fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x196300: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196304: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x196304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x196308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19630c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x19630cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x196310: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x196310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x196314: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x196314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
    // 0x196318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x196318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19631c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x19631cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x196320: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x196320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x196324: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x196324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x196328: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x196328u;
    SET_GPR_U32(ctx, 31, 0x196330u);
    ctx->pc = 0x19632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196328u;
    // 0x19632c: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x196328u, 0x196330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196330u;
label_196330:
    // 0x196330: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x196330u;
    {
        const bool branch_taken_0x196330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196330u;
        // 0x196334: 0xae220600  sw          $v0, 0x600($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196330) {
            ctx->pc = 0x196370u;
            goto label_196370;
        }
    }
    ctx->pc = 0x196338u;
    // 0x196338: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x196338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19633c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x19633cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x196340: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x196340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x196344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196348: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x196348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x19634c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19634cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196350: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x196350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x196354: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x196354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196358: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x196358u;
    SET_GPR_U32(ctx, 31, 0x196360u);
    ctx->pc = 0x19635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196358u;
    // 0x19635c: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x196358u, 0x196360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196360u;
label_196360:
    // 0x196360: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x196360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x196364: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196368: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x196368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19636c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19636cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_196370:
    // 0x196370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196378: 0xa62209d8  sh          $v0, 0x9D8($s1)
    ctx->pc = 0x196378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2520), (uint16_t)GPR_U32(ctx, 2));
    // 0x19637c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19637cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196380: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x196380u;
    SET_GPR_U32(ctx, 31, 0x196388u);
    ctx->pc = 0x196384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196380u;
    // 0x196384: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x196380u, 0x196388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196388u;
label_196388:
    // 0x196388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19638c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196390: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x196390u;
    SET_GPR_U32(ctx, 31, 0x196398u);
    ctx->pc = 0x196394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196390u;
    // 0x196394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x196390u, 0x196398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196398u;
label_196398:
    // 0x196398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19639c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1963a0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1963A0u;
    SET_GPR_U32(ctx, 31, 0x1963A8u);
    ctx->pc = 0x1963A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963A0u;
    // 0x1963a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1963A0u, 0x1963A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963A8u;
label_1963a8:
    // 0x1963a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1963a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963ac: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1963b0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1963B0u;
    SET_GPR_U32(ctx, 31, 0x1963B8u);
    ctx->pc = 0x1963B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963B0u;
    // 0x1963b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1963B0u, 0x1963B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963B8u;
label_1963b8:
    // 0x1963b8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1963bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1963bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c0: 0x24494ed0  addiu       $t1, $v0, 0x4ED0
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20176));
    // 0x1963c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1963c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1963c8: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1963c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1963cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1963d0:
    // 0x1963d0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1963d4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1963d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1963d8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1963d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963dc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1963DCu;
    {
        const bool branch_taken_0x1963dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963DCu;
        // 0x1963e0: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963dc) {
            ctx->pc = 0x196474u;
            goto label_196474;
        }
    }
    ctx->pc = 0x1963E4u;
    // 0x1963e4: 0x0  nop
    ctx->pc = 0x1963e4u;
    // NOP
label_1963e8:
    // 0x1963e8: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x1963e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1963ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1963ECu;
    {
        const bool branch_taken_0x1963ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1963F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963ECu;
        // 0x1963f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963ec) {
            ctx->pc = 0x1963FCu;
            goto label_1963fc;
        }
    }
    ctx->pc = 0x1963F4u;
    // 0x1963f4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1963f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1963f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1963f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1963fc:
    // 0x1963fc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1963fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x196400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196400u;
    {
        const bool branch_taken_0x196400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196400u;
        // 0x196404: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196400) {
            ctx->pc = 0x196418u;
            goto label_196418;
        }
    }
    ctx->pc = 0x196408u;
    // 0x196408: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x196408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x19640c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196410u;
    {
        const bool branch_taken_0x196410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196410u;
        // 0x196414: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196410) {
            ctx->pc = 0x19641Cu;
            goto label_19641c;
        }
    }
    ctx->pc = 0x196418u;
label_196418:
    // 0x196418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19641c:
    // 0x19641c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x196420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196424: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x196424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x196428: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x196428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19642c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19642cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x196430: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x196430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x196434: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196434u;
    {
        const bool branch_taken_0x196434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196434u;
        // 0x196438: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196434) {
            ctx->pc = 0x196444u;
            goto label_196444;
        }
    }
    ctx->pc = 0x19643Cu;
    // 0x19643c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x19643cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196444:
    // 0x196444: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x196444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x196448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196448u;
    {
        const bool branch_taken_0x196448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196448u;
        // 0x19644c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196448) {
            ctx->pc = 0x196460u;
            goto label_196460;
        }
    }
    ctx->pc = 0x196450u;
    // 0x196450: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x196450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x196454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196458u;
    {
        const bool branch_taken_0x196458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196458u;
        // 0x19645c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196458) {
            ctx->pc = 0x196464u;
            goto label_196464;
        }
    }
    ctx->pc = 0x196460u;
label_196460:
    // 0x196460: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x196460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196464:
    // 0x196464: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x196464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x196468: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19646c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x196470: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x196470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_196474:
    // 0x196474: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x196474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x196478: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x196478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x19647c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x19647cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196480: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x196480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196488: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x196488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19648c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19648Cu;
    {
        const bool branch_taken_0x19648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19648c) {
            ctx->pc = 0x196490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19648Cu;
            // 0x196490: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1964A8u;
            goto label_1964a8;
        }
    }
    ctx->pc = 0x196494u;
    // 0x196494: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x196494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x196498: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x196498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19649c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x19649Cu;
    {
        const bool branch_taken_0x19649c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19649c) {
            ctx->pc = 0x1964A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19649Cu;
            // 0x1964a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1963E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1963e8;
        }
    }
    ctx->pc = 0x1964A4u;
    // 0x1964a4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1964a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1964a8:
    // 0x1964a8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1964a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1964ac: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1964ACu;
    {
        const bool branch_taken_0x1964ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1964B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964ACu;
        // 0x1964b0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964ac) {
            ctx->pc = 0x1963D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1963d0;
        }
    }
    ctx->pc = 0x1964B4u;
    // 0x1964b4: 0x26824ed0  addiu       $v0, $s4, 0x4ED0
    ctx->pc = 0x1964b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20176));
    // 0x1964b8: 0x90560007  lbu         $s6, 0x7($v0)
    ctx->pc = 0x1964b8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1964bc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1964bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1964c0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1964c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1964c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1964c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964c8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1964c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1964cc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1964ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1964d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1964D0u;
    {
        const bool branch_taken_0x1964d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1964D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964D0u;
        // 0x1964d4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964d0) {
            ctx->pc = 0x1964E0u;
            goto label_1964e0;
        }
    }
    ctx->pc = 0x1964D8u;
    // 0x1964d8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1964d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1964dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1964dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1964e0:
    // 0x1964e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1964e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1964e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1964E4u;
    {
        const bool branch_taken_0x1964e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964E4u;
        // 0x1964e8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964e4) {
            ctx->pc = 0x1964FCu;
            goto label_1964fc;
        }
    }
    ctx->pc = 0x1964ECu;
    // 0x1964ec: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1964ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1964f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1964f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1964F4u;
    {
        const bool branch_taken_0x1964f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F4u;
        // 0x1964f8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964f4) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1964FCu;
label_1964fc:
    // 0x1964fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1964fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196500:
    // 0x196500: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x196500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196504: 0xc051f18  jal         func_147C60
    ctx->pc = 0x196504u;
    SET_GPR_U32(ctx, 31, 0x19650Cu);
    ctx->pc = 0x196508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196504u;
    // 0x196508: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x196504u, 0x19650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19650Cu;
label_19650c:
    // 0x19650c: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x19650Cu;
    {
        const bool branch_taken_0x19650c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x196510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19650Cu;
        // 0x196510: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19650c) {
            ctx->pc = 0x1965C0u;
            goto label_1965c0;
        }
    }
    ctx->pc = 0x196514u;
    // 0x196514: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x196514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196518: 0x90434ed6  lbu         $v1, 0x4ED6($v0)
    ctx->pc = 0x196518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20182)));
    // 0x19651c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x19651cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196520: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x196520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196524: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x196524u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196528: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x196528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19652c: 0x0  nop
    ctx->pc = 0x19652cu;
    // NOP
label_196530:
    // 0x196530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196534: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x196534u;
    {
        const bool branch_taken_0x196534 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x196538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196534u;
        // 0x196538: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196534) {
            ctx->pc = 0x196540u;
            goto label_196540;
        }
    }
    ctx->pc = 0x19653Cu;
    // 0x19653c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19653cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_196540:
    // 0x196540: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x196544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196544u;
    {
        const bool branch_taken_0x196544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196544u;
        // 0x196548: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196544) {
            ctx->pc = 0x196558u;
            goto label_196558;
        }
    }
    ctx->pc = 0x19654Cu;
    // 0x19654c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x196550: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x196550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x196554: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x196554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196558:
    // 0x196558: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x196558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19655c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196560: 0xc051f18  jal         func_147C60
    ctx->pc = 0x196560u;
    SET_GPR_U32(ctx, 31, 0x196568u);
    ctx->pc = 0x196564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196560u;
    // 0x196564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x196560u, 0x196568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196568u;
label_196568:
    // 0x196568: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x196568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19656c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x19656cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x196570: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x196570u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196574: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x196574u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x196578: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x196578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19657c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x19657cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x196580: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x196580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x196584: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x196584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19658c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x19658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196590: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x196590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196594: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x196594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196598: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x196598u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x19659c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19659cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1965a0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1965a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1965a4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1965a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1965a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1965a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1965ac: 0xc051f10  jal         func_147C40
    ctx->pc = 0x1965ACu;
    SET_GPR_U32(ctx, 31, 0x1965B4u);
    ctx->pc = 0x1965B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965ACu;
    // 0x1965b0: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1965ACu, 0x1965B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965B4u;
label_1965b4:
    // 0x1965b4: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x1965b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1965b8: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1965B8u;
    {
        const bool branch_taken_0x1965b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965b8) {
            ctx->pc = 0x1965BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1965B8u;
            // 0x1965bc: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196530;
        }
    }
    ctx->pc = 0x1965C0u;
label_1965c0:
    // 0x1965c0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1965c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1965c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1965c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1965c8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1965c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1965cc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1965ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1965d0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1965d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1965d4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1965d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1965d8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1965d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1965dc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1965dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1965e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1965e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1965e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1965e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1965e8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1965e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1965ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1965ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965ECu;
        // 0x1965f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965F4u;
    // 0x1965f4: 0x0  nop
    ctx->pc = 0x1965f4u;
    // NOP
    ctx->pc = 0x1965f8u;
}
